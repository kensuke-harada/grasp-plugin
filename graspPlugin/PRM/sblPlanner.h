// *************************************************************
// SBL Path sblPlanner
// *************************************************************

#ifndef SBL_PLANNER_H
#define SBL_PLANNER_H

#include <sys/times.h>

#include <stdlib.h>
#include <queue>
#include <vector>
#include <list>

#include "sblMilestone.h"
#include "sblRn.h"
#include "sblTree.h"
#include "sblEdge.h"
#include "mpkRobots.h"

#ifdef ADAPT_COLLCHECKER
#include "mpkAdaptSegmentChecker.h"
#else
#include "mpkSimpleSegmentChecker.h"
#endif

#include <cnoid/Body>	/* modified by qtconv.rb 0th rule*/  
#include <cnoid/ModelNodeSet>	/* modified by qtconv.rb 0th rule*/  
#include <cnoid/Link>	/* modified by qtconv.rb 0th rule*/  
#include <cnoid/ColdetLinkPair>	/* modified by qtconv.rb 0th rule*/  
#include <cnoid/JointPath>	/* modified by qtconv.rb 0th rule*/  

#include <cnoid/SceneBody>	/* modified by qtconv.rb 0th rule*/  
#include <cnoid/BodyItem>	/* modified by qtconv.rb 0th rule*/  
#include <cnoid/WorldItem>	/* modified by qtconv.rb 0th rule*/  
#include <cnoid/SceneBodyManager>	/* modified by qtconv.rb 0th rule*/  

#include "exportdef.h"

typedef priority_queue<sblEdge *,vector<sblEdge *>, sblPrioritizeEdges> edgesQueue;

///
enum {IN_SAME_BIN, ANY_BIN, ANY_NODE, NEAREST_NODE};
///
enum {T_INIT=0, T_GOAL};

/**@memo This contains the implementation of the basic sblPlanner.
   The current planner uses a simple segment checker (class
   {@link mpkSimpleSegmentChecker mpkSimpleSegmentChecker}) for the collision
   tests.

   @see mpkSimpleSegmentChecker
*/

class sblPlanner {

public:

  /**@doc Takes a pointer {\bf robots} to the robot collection, a set
     of collision test pairs (see
     {@link mpkCollPairSet mpkCollPairSet})
     and a c-space resolution for the
     {@link mpkSimpleSegmentChecker mpkSimpleSegmentChecker}.
  */

  //sblPlanner(mpkRobotCollection* robots, vector<mpkCollPair> *test_pairs
  sblPlanner(mpkRobots *robots, cnoid::ColdetLinkPairPtr *test_pairs, int test_size, const std::vector<int>& SampleDOF 
#ifndef ADAPT_COLLCHECKER
	     ,double epsilon=0.012
#endif
	     );

  virtual ~sblPlanner() {
    delete point_checker;
  };

  /**@doc This function is used to invoke the planner.  {\bf rho} is
     the initial neighborhood size for sampling around a milestone and
     {\bf max_it} is the maximum number of iterations.  If no path is
     found within this number of iterations, false is returned. */
  bool Query( mpkConfig& q0, mpkConfig& q1, list<mpkConfig> &genPath, 
	       double rho=0.15, int max_it=100000);

  /**@doc Evaluates the planner time and outputs final Path (Unix) */
  void printStats(struct tms start, struct tms end, list<mpkConfig> &genPath);

  /**@doc Writes the final path to a file */
  void writePath(const list<mpkConfig>&, char *file_name);

protected:

  /* Function to expand trees */
  void expandTree(double rho, sblMilestone& m);

  /* Function to check if the two trees being grown during Planning
   are connectable or not*/ 
  bool ConnectTrees(int i, const sblMilestone& m);

  /* Function to sample a new sblMilestone around a current one */
  bool sample(const sblMilestone& q, sblMilestone& q_rand, double);

  /* Function to update tree connectivity */
  void delSegment(sblEdge& inColl);
  
  /* Function to update tree connectivity */
  void updatesblBins(int tree, sblMilestone& m);
  
  /* Function to update tree connectivity */  
  void delsblMilestone(int tree, sblMilestone& m);

  /* Function to test whether a path is collision free or not */
  bool testPath(edgesQueue&); 

  //
  bool testSegment(sblEdge &u);

  // For the management of the edges
  int getIndex(const sblMilestone& x0, const sblMilestone& x1);
  //
  bool setRoot(mpkConfig& q, sblTree& T);
  //
  void addsblMilestone(sblTree& T, sblMilestone& to_add, sblMilestone& father);
  //
  void getsblEdges(sblMilestone& , sblMilestone& , edgesQueue& );

  /* Returns Path length */
  double pathLength(const list<mpkConfig>& tau);
 
  /* To report planner time */
  void report_times (struct tms start, struct tms end);
  void addTime(struct tms start, struct tms end);

  /* random number initializer flag */
  static bool initRand; 

  /* ID for the trees */
  int tree_; 
  //
  int nodes_counter;

  /* To measure time */
  struct tms optstart, optend; 

  /* Tree rooted at the goal configuration */
  sblTree Tg;

  /* Tree rooted at the start configuration */
  sblTree Ti;
  //
  int dof0_;
  //
  int dof1_;

  /* the set of all the nodes generated on both trees */

  // 
  vector<sblMilestone>  allNodes;
  
  /* To store the bridge */
  sblEdge theBridge; 
 
  /* To store the first path found */ 
  list<mpkConfig> freePath; 
  
  /* For Randon configuration generation */
  sblRn randConfig;

  /* Variables used for keeping info related to the performance: */
  int onBridge;
  //
  int path_rej;
  //
  int sampled_Mil;

  /* Counter of total coll checks */
  int total_CC;  

  /* Counter of coll checks when checking the path */
  int path_CC;    

  /* To store the time required for Collision-Checking */
  double CC_time;
  //int dofCounter[6][10];
 
  mpkConfig coll_conf;

  //
  //vector<mpkCollPair> *test_pairs_;
  cnoid::ColdetLinkPairPtr *test_pairs_;
  int test_size_;

  mpkConfigChecker *point_checker;
  //

  /* resolution static bool initRand */ 
#ifndef ADAPT_COLLCHECKER
  double EPSILON; 
#endif

  //mpkRobotCollection *robots_;
  mpkRobots *robots_;

  vector<int> sampleDOF;

};

#endif
