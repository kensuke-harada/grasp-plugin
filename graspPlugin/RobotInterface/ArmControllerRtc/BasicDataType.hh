// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __BasicDataType_hh__
#define __BasicDataType_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_BasicDataType
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_BasicDataType
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_BasicDataType
#endif






#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE RTC

_CORBA_MODULE_BEG

  struct Time {
    typedef _CORBA_ConstrType_Fix_Var<Time> _var_type;

    
    ::CORBA::ULong sec;

    ::CORBA::ULong nsec;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef Time::_var_type Time_var;

  typedef Time& Time_out;

  struct TimedState {
    typedef _CORBA_ConstrType_Fix_Var<TimedState> _var_type;

    
    Time tm;

    ::CORBA::Short data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedState::_var_type TimedState_var;

  typedef TimedState& TimedState_out;

  struct TimedShort {
    typedef _CORBA_ConstrType_Fix_Var<TimedShort> _var_type;

    
    Time tm;

    ::CORBA::Short data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedShort::_var_type TimedShort_var;

  typedef TimedShort& TimedShort_out;

  struct TimedLong {
    typedef _CORBA_ConstrType_Fix_Var<TimedLong> _var_type;

    
    Time tm;

    ::CORBA::Long data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedLong::_var_type TimedLong_var;

  typedef TimedLong& TimedLong_out;

  struct TimedUShort {
    typedef _CORBA_ConstrType_Fix_Var<TimedUShort> _var_type;

    
    Time tm;

    ::CORBA::UShort data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedUShort::_var_type TimedUShort_var;

  typedef TimedUShort& TimedUShort_out;

  struct TimedULong {
    typedef _CORBA_ConstrType_Fix_Var<TimedULong> _var_type;

    
    Time tm;

    ::CORBA::ULong data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedULong::_var_type TimedULong_var;

  typedef TimedULong& TimedULong_out;

  struct TimedFloat {
    typedef _CORBA_ConstrType_Fix_Var<TimedFloat> _var_type;

    
    Time tm;

    ::CORBA::Float data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedFloat::_var_type TimedFloat_var;

  typedef TimedFloat& TimedFloat_out;

  struct TimedDouble {
    typedef _CORBA_ConstrType_Fix_Var<TimedDouble> _var_type;

    
    Time tm;

    ::CORBA::Double data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedDouble::_var_type TimedDouble_var;

  typedef TimedDouble& TimedDouble_out;

  struct TimedChar {
    typedef _CORBA_ConstrType_Fix_Var<TimedChar> _var_type;

    
    Time tm;

    ::CORBA::Char data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedChar::_var_type TimedChar_var;

  typedef TimedChar& TimedChar_out;

  struct TimedWChar {
    typedef _CORBA_ConstrType_Fix_Var<TimedWChar> _var_type;

    
    Time tm;

    ::CORBA::WChar data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedWChar::_var_type TimedWChar_var;

  typedef TimedWChar& TimedWChar_out;

  struct TimedBoolean {
    typedef _CORBA_ConstrType_Fix_Var<TimedBoolean> _var_type;

    
    Time tm;

    ::CORBA::Boolean data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedBoolean::_var_type TimedBoolean_var;

  typedef TimedBoolean& TimedBoolean_out;

  struct TimedOctet {
    typedef _CORBA_ConstrType_Fix_Var<TimedOctet> _var_type;

    
    Time tm;

    ::CORBA::Octet data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedOctet::_var_type TimedOctet_var;

  typedef TimedOctet& TimedOctet_out;

  struct TimedString {
    typedef _CORBA_ConstrType_Variable_Var<TimedString> _var_type;

    
    Time tm;

    ::CORBA::String_member data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedString::_var_type TimedString_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedString,TimedString_var > TimedString_out;

  struct TimedWString {
    typedef _CORBA_ConstrType_Variable_Var<TimedWString> _var_type;

    
    Time tm;

    ::CORBA::WString_member data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedWString::_var_type TimedWString_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedWString,TimedWString_var > TimedWString_out;

  struct TimedShortSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedShortSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Short, 2, 2 >  _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedShortSeq::_var_type TimedShortSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedShortSeq,TimedShortSeq_var > TimedShortSeq_out;

  struct TimedLongSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedLongSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Long, 4, 4 >  _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedLongSeq::_var_type TimedLongSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedLongSeq,TimedLongSeq_var > TimedLongSeq_out;

  struct TimedUShortSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedUShortSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::UShort, 2, 2 >  _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedUShortSeq::_var_type TimedUShortSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedUShortSeq,TimedUShortSeq_var > TimedUShortSeq_out;

  struct TimedULongSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedULongSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::ULong, 4, 4 >  _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedULongSeq::_var_type TimedULongSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedULongSeq,TimedULongSeq_var > TimedULongSeq_out;

  struct TimedFloatSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedFloatSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Float, 4, 4 >  _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedFloatSeq::_var_type TimedFloatSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedFloatSeq,TimedFloatSeq_var > TimedFloatSeq_out;

  struct TimedDoubleSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedDoubleSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_w_FixSizeElement< ::CORBA::Double, 8, 8 >  _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedDoubleSeq::_var_type TimedDoubleSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedDoubleSeq,TimedDoubleSeq_var > TimedDoubleSeq_out;

  struct TimedCharSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedCharSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_Char _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedCharSeq::_var_type TimedCharSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedCharSeq,TimedCharSeq_var > TimedCharSeq_out;

  struct TimedWCharSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedWCharSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_WChar _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedWCharSeq::_var_type TimedWCharSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedWCharSeq,TimedWCharSeq_var > TimedWCharSeq_out;

  struct TimedBooleanSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedBooleanSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_Boolean _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedBooleanSeq::_var_type TimedBooleanSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedBooleanSeq,TimedBooleanSeq_var > TimedBooleanSeq_out;

  struct TimedOctetSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedOctetSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_Octet _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedOctetSeq::_var_type TimedOctetSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedOctetSeq,TimedOctetSeq_var > TimedOctetSeq_out;

  struct TimedStringSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedStringSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_String _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedStringSeq::_var_type TimedStringSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedStringSeq,TimedStringSeq_var > TimedStringSeq_out;

  struct TimedWStringSeq {
    typedef _CORBA_ConstrType_Variable_Var<TimedWStringSeq> _var_type;

    
    Time tm;

    typedef _CORBA_Unbounded_Sequence_WString _data_seq;
    _data_seq data;

  

    void operator>>= (cdrStream &) const;
    void operator<<= (cdrStream &);
  };

  typedef TimedWStringSeq::_var_type TimedWStringSeq_var;

  typedef _CORBA_ConstrType_Variable_OUT_arg< TimedWStringSeq,TimedWStringSeq_var > TimedWStringSeq_out;

_CORBA_MODULE_END



_CORBA_MODULE POA_RTC
_CORBA_MODULE_BEG

_CORBA_MODULE_END



_CORBA_MODULE OBV_RTC
_CORBA_MODULE_BEG

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr





#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_BasicDataType
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_BasicDataType
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_BasicDataType
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_BasicDataType
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_BasicDataType
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_BasicDataType
#endif

#endif  // __BasicDataType_hh__

