// $Id$

/* -*- C++ -*- */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO ORB and the TAO IDL Compiler have been developed by Washington
// University Computer Science's Distributed Object Computing Group.
//
// Information on TAO is available at
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "tao/PolicyC.h"
#include "tao/Stub.h"
#include "tao/Servant_Base.h"
#include "tao/POA_CORBA.h"
#include "tao/Invocation.h"

#if !defined (__ACE_INLINE__)
#include "PolicyC.i"
#endif /* !defined INLINE */

ACE_RCSID(tao, PolicyC, "$Id$")

// ****************************************************************

TAO_NAMESPACE_TYPE (const CORBA::PolicyErrorCode)
TAO_NAMESPACE_BEGIN (CORBA)
TAO_NAMESPACE_DEFINE (const CORBA::PolicyErrorCode, BAD_POLICY, 0)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::PolicyErrorCode)
TAO_NAMESPACE_BEGIN (CORBA)
TAO_NAMESPACE_DEFINE (const CORBA::PolicyErrorCode, UNSUPPORTED_POLICY, 1)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::PolicyErrorCode)
TAO_NAMESPACE_BEGIN (CORBA)
TAO_NAMESPACE_DEFINE (const CORBA::PolicyErrorCode, BAD_POLICY_TYPE, 2)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::PolicyErrorCode)
TAO_NAMESPACE_BEGIN (CORBA)
TAO_NAMESPACE_DEFINE (const CORBA::PolicyErrorCode, BAD_POLICY_VALUE, 3)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::PolicyErrorCode)
TAO_NAMESPACE_BEGIN (CORBA)
TAO_NAMESPACE_DEFINE (const CORBA::PolicyErrorCode, UNSUPPORTED_POLICY_VALUE, 4)
TAO_NAMESPACE_END

// ****************************************************************

// default constructor
CORBA_PolicyError::CORBA_PolicyError (void)
  : CORBA_UserException (CORBA::_tc_PolicyError)
{
}

// destructor - all members are of self managing types
CORBA_PolicyError::~CORBA_PolicyError (void)
{
}

// copy constructor
CORBA_PolicyError::CORBA_PolicyError (const CORBA_PolicyError &_tao_excp)
  : CORBA_UserException (_tao_excp._type ())
{
    this->reason = _tao_excp.reason;
}

// assignment operator
CORBA_PolicyError&
CORBA_PolicyError::operator= (const CORBA_PolicyError &_tao_excp)
{

  this->CORBA_UserException::operator= (_tao_excp);
  this->reason = _tao_excp.reason;
  return *this;
}

// narrow
CORBA_PolicyError_ptr
CORBA_PolicyError::_downcast (CORBA::Exception *exc)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/CORBA/PolicyError:1.0", exc->_id ())) // same type
    return ACE_dynamic_cast (CORBA_PolicyError_ptr, exc);
  else
    return 0;
}

void CORBA_PolicyError::_raise (void)
{
  TAO_RAISE(*this);
}

void CORBA_PolicyError::_tao_encode (TAO_OutputCDR &cdr,
                                     CORBA::Environment &ACE_TRY_ENV) const
{
  if (cdr << *this)
    return;
  ACE_THROW (CORBA::MARSHAL ());
}

void CORBA_PolicyError::_tao_decode (TAO_InputCDR &cdr,
                                     CORBA::Environment &ACE_TRY_ENV)
{
  if (cdr >> *this)
    return;
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the _alloc method
CORBA::Exception *CORBA_PolicyError::_alloc (void)
{
  CORBA::Exception *retval = 0;

  ACE_NEW_RETURN (retval,
                  CORBA_PolicyError,
                  0);
  return retval;
}

CORBA_PolicyError::CORBA_PolicyError(
  CORBA::PolicyErrorCode _tao_reason)

  : CORBA_UserException  (CORBA::TypeCode::_duplicate (CORBA::_tc_PolicyError))
{
    this->reason = _tao_reason;
}

// ****************************************************************

// default constructor
CORBA_InvalidPolicies::CORBA_InvalidPolicies (void)
  : CORBA_UserException (CORBA::_tc_InvalidPolicies)
{
}

// destructor - all members are of self managing types
CORBA_InvalidPolicies::~CORBA_InvalidPolicies (void)
{
}

// copy constructor
CORBA_InvalidPolicies::CORBA_InvalidPolicies (const CORBA_InvalidPolicies &_tao_excp)
  : CORBA_UserException (_tao_excp._type ())
{
    this->indices = _tao_excp.indices;
}

// assignment operator
CORBA_InvalidPolicies&
CORBA_InvalidPolicies::operator= (const CORBA_InvalidPolicies &_tao_excp)
{

  this->CORBA_UserException::operator= (_tao_excp);
  this->indices = _tao_excp.indices;
  return *this;
}

// narrow
CORBA_InvalidPolicies_ptr
CORBA_InvalidPolicies::_downcast (CORBA::Exception *exc)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/CORBA/InvalidPolicies:1.0", exc->_id ())) // same type
    return ACE_dynamic_cast (CORBA_InvalidPolicies_ptr, exc);
  else
    return 0;
}

void CORBA_InvalidPolicies::_raise (void)
{
  TAO_RAISE(*this);
}

void CORBA_InvalidPolicies::_tao_encode (TAO_OutputCDR &cdr,
                                         CORBA::Environment &ACE_TRY_ENV) const
{
  if (cdr << *this)
    return;
  ACE_THROW (CORBA::MARSHAL ());
}

void CORBA_InvalidPolicies::_tao_decode (TAO_InputCDR &cdr,
                                         CORBA::Environment &ACE_TRY_ENV)
{
  if (cdr >> *this)
    return;
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the _alloc method
CORBA::Exception *CORBA_InvalidPolicies::_alloc (void)
{
  CORBA::Exception *retval = 0;

  ACE_NEW_RETURN (retval,
                  CORBA_InvalidPolicies,
                  0);

  return retval;
}

CORBA_InvalidPolicies::CORBA_InvalidPolicies(
  const CORBA_InvalidPolicies::_tao_seq_UShort & _tao_indices)

  : CORBA_UserException  (CORBA::TypeCode::_duplicate (CORBA::_tc_InvalidPolicies))
{
    this->indices = _tao_indices;
}

// ****************************************************************

CORBA_Policy_ptr CORBA_Policy::_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  if (CORBA::is_nil (obj))
    return CORBA_Policy::_nil ();
  CORBA::Boolean is_a = obj->_is_a ("IDL:omg.org/CORBA/Policy:1.0", ACE_TRY_ENV);
  ACE_CHECK_RETURN (CORBA_Policy::_nil ());
  if (is_a == 0)
    return CORBA_Policy::_nil ();
  TAO_Stub* stub = obj->_stubobj ();
  void* servant = 0;
  if (obj->_is_collocated () && obj->_servant() != 0)
    servant = obj->_servant()->_downcast ("IDL:omg.org/CORBA/Policy:1.0");
#if defined (TAO_HAS_LOCALITY_CONSTRAINT_POLICIES)
  if (servant == 0)
    ACE_THROW_RETURN (CORBA::MARSHAL (), CORBA::Policy::_nil ());
#else
  stub->_incr_refcnt ();
  if (servant == 0)
    {
      CORBA_Policy_ptr rval =
        CORBA_Policy::_nil ();

      ACE_NEW_RETURN (rval,
                      CORBA_Policy (stub),
                      CORBA_Policy::_nil ());

      return rval;
    }

#endif /* TAO_HAS_LOCALITY_CONSTRAINT_POLICIES */

  CORBA_Policy_ptr retval =
    CORBA_Policy::_nil ();

  ACE_NEW_RETURN (
      retval,
      POA_CORBA::_tao_collocated_Policy (
          ACE_reinterpret_cast (POA_CORBA::Policy_ptr,
                                servant),
          stub
        ),
      CORBA_Policy::_nil ()
    );

  return retval;
}

#if !defined (TAO_HAS_LOCALITY_CONSTRAINT_POLICIES)
CORBA::PolicyType CORBA_Policy::policy_type (
    CORBA::Environment &ACE_TRY_ENV
  )
{
    CORBA::PolicyType _tao_retval = 0;

  TAO_Stub *istub = this->_stubobj ();
  if (istub == 0)
    ACE_THROW_RETURN (CORBA::INTERNAL (), _tao_retval);


  TAO_GIOP_Twoway_Invocation _tao_call (
      istub,
      "_get_""policy_type",
      16,
      istub->orb_core ()
    );


  for (;;)
  {
    _tao_call.start (ACE_TRY_ENV);
        ACE_CHECK_RETURN (_tao_retval);

    CORBA::Short flag = TAO_TWOWAY_RESPONSE_FLAG;

    _tao_call.prepare_header (ACE_static_cast (CORBA::Octet, flag),
                              ACE_TRY_ENV);
    ACE_CHECK_RETURN (_tao_retval);

    int _invoke_status =
      _tao_call.invoke (0, 0, ACE_TRY_ENV);
        ACE_CHECK_RETURN (_tao_retval);

    if (_invoke_status == TAO_INVOKE_RESTART)
      continue;
    // if (_invoke_status == TAO_INVOKE_EXCEPTION)
      // cannot happen
    if (_invoke_status != TAO_INVOKE_OK)
    {
      ACE_THROW_RETURN (CORBA::UNKNOWN (TAO_DEFAULT_MINOR_CODE, CORBA::COMPLETED_YES), _tao_retval);

    }
    break;

  }
  TAO_InputCDR &_tao_in = _tao_call.inp_stream ();
  if (!(
        (_tao_in >> _tao_retval)
    ))
    ACE_THROW_RETURN (CORBA::MARSHAL (TAO_DEFAULT_MINOR_CODE, CORBA::COMPLETED_YES), _tao_retval);
  return _tao_retval;
}

CORBA_Policy_ptr CORBA_Policy::copy (
    CORBA::Environment &ACE_TRY_ENV
  )
{
    CORBA_Policy_ptr _tao_retval = CORBA_Policy::_nil ();

  TAO_Stub *istub = this->_stubobj ();
  if (istub == 0)
    ACE_THROW_RETURN (CORBA::INTERNAL (), _tao_retval);


  TAO_GIOP_Twoway_Invocation _tao_call (
      istub,
      "copy",
      4,
      istub->orb_core ()
    );


  for (;;)
  {
    _tao_call.start (ACE_TRY_ENV);
        ACE_CHECK_RETURN (_tao_retval);

    CORBA::Short flag = TAO_TWOWAY_RESPONSE_FLAG;

    _tao_call.prepare_header (ACE_static_cast (CORBA::Octet, flag),
                              ACE_TRY_ENV);
    ACE_CHECK_RETURN (_tao_retval);

    int _invoke_status =
      _tao_call.invoke (0, 0, ACE_TRY_ENV);
        ACE_CHECK_RETURN (_tao_retval);

    if (_invoke_status == TAO_INVOKE_RESTART)
      continue;
    // if (_invoke_status == TAO_INVOKE_EXCEPTION)
      // cannot happen
    if (_invoke_status != TAO_INVOKE_OK)
    {
      ACE_THROW_RETURN (CORBA::UNKNOWN (TAO_DEFAULT_MINOR_CODE, CORBA::COMPLETED_YES), _tao_retval);

    }
    break;

  }
  TAO_InputCDR &_tao_in = _tao_call.inp_stream ();
  if (!(
        (_tao_in >> _tao_retval)
    ))
    ACE_THROW_RETURN (CORBA::MARSHAL (TAO_DEFAULT_MINOR_CODE, CORBA::COMPLETED_YES), _tao_retval);
  return _tao_retval;
}

void CORBA_Policy::destroy (
    CORBA::Environment &ACE_TRY_ENV
  )
{

  TAO_Stub *istub = this->_stubobj ();
  if (istub == 0)
    ACE_THROW (CORBA::INTERNAL ());


  TAO_GIOP_Twoway_Invocation _tao_call (
      istub,
      "destroy",
      7,
      istub->orb_core ()
    );


  for (;;)
  {
    _tao_call.start (ACE_TRY_ENV);
        ACE_CHECK;

    CORBA::Short flag = TAO_TWOWAY_RESPONSE_FLAG;

    _tao_call.prepare_header (ACE_static_cast (CORBA::Octet, flag),
                              ACE_TRY_ENV);
    ACE_CHECK;

    int _invoke_status =
      _tao_call.invoke (0, 0, ACE_TRY_ENV);
        ACE_CHECK;

    if (_invoke_status == TAO_INVOKE_RESTART)
      continue;
    // if (_invoke_status == TAO_INVOKE_EXCEPTION)
      // cannot happen
    if (_invoke_status != TAO_INVOKE_OK)
    {
      ACE_THROW (CORBA::UNKNOWN (TAO_DEFAULT_MINOR_CODE, CORBA::COMPLETED_YES));

    }
    break;

  }

}
#endif /* !TAO_HAS_LOCALITY_CONSTRAINT_POLICIES */

CORBA::Boolean CORBA_Policy::_is_a (const CORBA::Char *value, CORBA::Environment &ACE_TRY_ENV)
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Policy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Object:1.0")))
  return 1; // success using local knowledge
  else
    return this->CORBA_Object::_is_a (value, ACE_TRY_ENV); // remote call
}

const char* CORBA_Policy::_interface_repository_id (void) const
{
  return "IDL:omg.org/CORBA/Policy:1.0";
}

CORBA_Policy_ptr
CORBA_Policy::_duplicate (CORBA_Policy_ptr obj)
{
  if (!CORBA::is_nil (obj))
    obj->_add_ref ();
  return obj;
}

CORBA_Policy_ptr
CORBA_Policy::_nil (void)
{
  return (CORBA_Policy_ptr)0;
}

////////////////////////////////////////////////////////////////
//        Serialization Support Methods
//
CORBA::Boolean 
CORBA_Policy::_tao_encode (TAO_OutputCDR &)
{
  return 0;
}

CORBA::Boolean 
CORBA_Policy::_tao_decode (TAO_InputCDR &)
{
  return 0;
}


// *************************************************************
// CORBA_PolicyList
// *************************************************************

CORBA_PolicyList::CORBA_PolicyList (void)
{}
CORBA_PolicyList::CORBA_PolicyList (CORBA::ULong max) // uses max size
  : TAO_Unbounded_Object_Sequence<CORBA_Policy,CORBA_Policy_var> (max)
{}
CORBA_PolicyList::CORBA_PolicyList (CORBA::ULong max, CORBA::ULong length, CORBA_Policy_ptr *buffer, CORBA::Boolean release)
  : TAO_Unbounded_Object_Sequence<CORBA_Policy,CORBA_Policy_var> (max, length, buffer, release)
{}
CORBA_PolicyList::CORBA_PolicyList (const CORBA_PolicyList &seq) // copy ctor
  : TAO_Unbounded_Object_Sequence<CORBA_Policy,CORBA_Policy_var> (seq)
{}
CORBA_PolicyList::~CORBA_PolicyList (void) // dtor
{}

// *************************************************************
// CORBA_PolicyTypeSeq
// *************************************************************

CORBA_PolicyTypeSeq::CORBA_PolicyTypeSeq (void)
{}
CORBA_PolicyTypeSeq::CORBA_PolicyTypeSeq (CORBA::ULong max) // uses max size
  : TAO_Unbounded_Sequence<CORBA::ULong>
 (max)
{}
CORBA_PolicyTypeSeq::CORBA_PolicyTypeSeq (CORBA::ULong max, CORBA::ULong length, CORBA::ULong *buffer, CORBA::Boolean release)
  : TAO_Unbounded_Sequence<CORBA::ULong> (max, length, buffer, release)
{}
CORBA_PolicyTypeSeq::CORBA_PolicyTypeSeq (const CORBA_PolicyTypeSeq &seq)
  : TAO_Unbounded_Sequence<CORBA::ULong> (seq)
{}
CORBA_PolicyTypeSeq::~CORBA_PolicyTypeSeq (void)
{}

// ****************************************************************

CORBA::PolicyManager_ptr CORBA_PolicyManager::_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  if (CORBA::is_nil (obj))
    return CORBA_PolicyManager::_nil ();
  CORBA::Boolean is_a = obj->_is_a ("IDL:omg.org/CORBA/PolicyManager:1.0", ACE_TRY_ENV);
  ACE_CHECK_RETURN (CORBA_PolicyManager::_nil ());
  if (is_a == 0)
    return CORBA_PolicyManager::_nil ();
  void* servant = 0;
  if (!obj->_is_collocated () || !obj->_servant() ||
      (servant = obj->_servant()->_downcast ("IDL:omg.org/CORBA/PolicyManager:1.0")) == 0)
    ACE_THROW_RETURN (CORBA::MARSHAL (), CORBA_PolicyManager::_nil ());

  CORBA::PolicyManager_ptr retval =
    CORBA_PolicyManager::_nil ();

  ACE_NEW_RETURN (
      retval,
      POA_CORBA::_tao_collocated_PolicyManager (
          ACE_reinterpret_cast (POA_CORBA::PolicyManager_ptr,
                                servant),
          0
        ),
      CORBA_PolicyManager::_nil ()
    );

  return retval;
}

CORBA_PolicyList * CORBA_PolicyManager::get_policy_overrides (
    const CORBA_PolicyTypeSeq & ts,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  CORBA_PolicyList* _tao_retval = 0;
  ACE_UNUSED_ARG (_tao_retval);
  ACE_UNUSED_ARG (ts);
  ACE_THROW_RETURN (CORBA::MARSHAL (), _tao_retval);
}

void CORBA_PolicyManager::set_policy_overrides (
    const CORBA_PolicyList & policies,
    CORBA::SetOverrideType set_add,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  ACE_UNUSED_ARG (policies);
  ACE_UNUSED_ARG (set_add);

  ACE_THROW (CORBA::MARSHAL ());
}

CORBA::Boolean CORBA_PolicyManager::_is_a (const CORBA::Char *value, CORBA::Environment &ACE_TRY_ENV)
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/PolicyManager:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Object:1.0")))
  return 1; // success using local knowledge
  else
    return this->CORBA_Object::_is_a (value, ACE_TRY_ENV); // remote call
}

const char* CORBA_PolicyManager::_interface_repository_id (void) const
{
  return "IDL:omg.org/CORBA/PolicyManager:1.0";
}

// ****************************************************************


CORBA_PolicyCurrent_ptr CORBA_PolicyCurrent::_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  if (CORBA::is_nil (obj))
    return CORBA_PolicyCurrent::_nil ();
  CORBA::Boolean is_a = obj->_is_a ("IDL:omg.org/CORBA/PolicyCurrent:1.0", ACE_TRY_ENV);
  ACE_CHECK_RETURN (CORBA_PolicyCurrent::_nil ());
  if (is_a == 0)
    return CORBA_PolicyCurrent::_nil ();
  void* servant = 0;
  if (!obj->_is_collocated () || !obj->_servant() ||
      (servant = obj->_servant()->_downcast ("IDL:omg.org/CORBA/PolicyCurrent:1.0")) == 0)
    ACE_THROW_RETURN (CORBA::MARSHAL (), CORBA_PolicyCurrent::_nil ());

  CORBA_PolicyCurrent_ptr retval =
    CORBA_PolicyCurrent::_nil ();

  ACE_NEW_RETURN (
      retval,
      POA_CORBA::_tao_collocated_PolicyCurrent (
          ACE_reinterpret_cast  (POA_CORBA::PolicyCurrent_ptr,
                                 servant),
          0
        ),
      CORBA_PolicyCurrent::_nil ()
    );

  return retval;
}

CORBA::Boolean CORBA_PolicyCurrent::_is_a (const CORBA::Char *value, CORBA::Environment &ACE_TRY_ENV)
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/PolicyCurrent:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/PolicyManager:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Current:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Object:1.0")))
  return 1; // success using local knowledge
  else
    return this->CORBA_Object::_is_a (value, ACE_TRY_ENV); // remote call
}

const char* CORBA_PolicyCurrent::_interface_repository_id (void) const
{
  return "IDL:omg.org/CORBA/PolicyCurrent:1.0";
}

// ****************************************************************


void operator<<= (CORBA::Any &_tao_any, const CORBA::PolicyError &_tao_elem) // copying
{
    TAO_OutputCDR stream;
    stream << _tao_elem;
    _tao_any._tao_replace (
        CORBA::_tc_PolicyError,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin ()
      );
}

void CORBA::PolicyError::_tao_any_destructor (void *x)
{
  CORBA::PolicyError *tmp = ACE_static_cast(CORBA::PolicyError*,x);
  delete tmp;
}

void operator<<= (CORBA::Any &_tao_any, CORBA::PolicyError *_tao_elem) // non copying
{
    TAO_OutputCDR stream;
    stream << *_tao_elem;
    _tao_any._tao_replace (
        CORBA::_tc_PolicyError,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin (),
        1,
        _tao_elem,
        CORBA::PolicyError::_tao_any_destructor
      );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, CORBA::PolicyError *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_PolicyError, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (CORBA::PolicyError *)_tao_any.value ();
      return 1;
    }
    else
    {
      ACE_NEW_RETURN (_tao_elem, CORBA::PolicyError, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            CORBA::_tc_PolicyError,
            1,
            ACE_reinterpret_cast (void *, _tao_elem),
            CORBA::PolicyError::_tao_any_destructor
          );
        return 1;
      }
      else
      {
        delete _tao_elem;
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete _tao_elem;
    _tao_elem = 0;
    return 0;
  }
  ACE_ENDTRY;
  return 0;
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const CORBA::PolicyError *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_PolicyError, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (CORBA::PolicyError *)_tao_any.value ();
      return 1;
    }
    else
    {
      ACE_NEW_RETURN (_tao_elem, CORBA::PolicyError, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *(CORBA::PolicyError *)_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            CORBA::_tc_PolicyError,
            1,
            ACE_reinterpret_cast (void *, ACE_const_cast (CORBA::PolicyError *&, _tao_elem)),
            CORBA::PolicyError::_tao_any_destructor
          );
        return 1;
      }
      else
      {
        delete ACE_const_cast (CORBA::PolicyError *&, _tao_elem);
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete ACE_const_cast (CORBA::PolicyError *&, _tao_elem);
    _tao_elem = 0;
    return 0;
  }
  ACE_ENDTRY;
  return 0;
}

void operator<<= (CORBA::Any &_tao_any, const CORBA::InvalidPolicies &_tao_elem) // copying
{
    TAO_OutputCDR stream;
    stream << _tao_elem;
    _tao_any._tao_replace (
        CORBA::_tc_InvalidPolicies,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin ()
      );
}

void CORBA::InvalidPolicies::_tao_any_destructor (void *x)
{
  CORBA::InvalidPolicies *tmp = ACE_static_cast(CORBA::InvalidPolicies*,x);
  delete tmp;
}

void operator<<= (CORBA::Any &_tao_any, CORBA::InvalidPolicies *_tao_elem) // non copying
{
    TAO_OutputCDR stream;
    stream << *_tao_elem;
    _tao_any._tao_replace (
        CORBA::_tc_InvalidPolicies,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin (),
        1,
        _tao_elem,
        CORBA::InvalidPolicies::_tao_any_destructor
      );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, CORBA::InvalidPolicies *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_InvalidPolicies, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (CORBA::InvalidPolicies *)_tao_any.value ();
      return 1;
    }
    else
    {
      ACE_NEW_RETURN (_tao_elem, CORBA::InvalidPolicies, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            CORBA::_tc_InvalidPolicies,
            1,
            ACE_reinterpret_cast (void *, _tao_elem),
            CORBA::InvalidPolicies::_tao_any_destructor
          );
        return 1;
      }
      else
      {
        delete _tao_elem;
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete _tao_elem;
    _tao_elem = 0;
    return 0;
  }
  ACE_ENDTRY;
  return 0;
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const CORBA::InvalidPolicies *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_InvalidPolicies, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (CORBA::InvalidPolicies *)_tao_any.value ();
      return 1;
    }
    else
    {
      ACE_NEW_RETURN (_tao_elem, CORBA::InvalidPolicies, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *(CORBA::InvalidPolicies *)_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            CORBA::_tc_InvalidPolicies,
            1,
            ACE_reinterpret_cast (void *, ACE_const_cast (CORBA::InvalidPolicies *&, _tao_elem)),
            CORBA::InvalidPolicies::_tao_any_destructor
          );
        return 1;
      }
      else
      {
        delete ACE_const_cast (CORBA::InvalidPolicies *&, _tao_elem);
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete ACE_const_cast (CORBA::InvalidPolicies *&, _tao_elem);
    _tao_elem = 0;
    return 0;
  }
  ACE_ENDTRY;
  return 0;
}

void CORBA::Policy::_tao_any_destructor (void *x)
{
  CORBA::Policy *tmp = ACE_static_cast(CORBA::Policy*,x);
  CORBA::release (tmp);
}

CORBA::Policy_ptr (*_TAO_collocation_CORBA_Policy_Stub_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;
void operator<<= (CORBA::Any &_tao_any, CORBA::Policy_ptr _tao_elem)
{
    TAO_OutputCDR stream;
    if (stream << _tao_elem)
    {
      _tao_any._tao_replace (
          CORBA::_tc_Policy,
          TAO_ENCAP_BYTE_ORDER,
          stream.begin (),
          1,
          _tao_elem,
          CORBA::Policy::_tao_any_destructor
        );
    }
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, CORBA::Policy_ptr &_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    _tao_elem = CORBA::Policy::_nil ();
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_Policy, ACE_TRY_ENV)) // not equal
      {
        return 0;
      }
    ACE_TRY_CHECK;
    TAO_InputCDR stream (
        _tao_any._tao_get_cdr (),
        _tao_any._tao_byte_order ()
      );
    CORBA::Object_var _tao_obj_var;
    if (stream >> _tao_obj_var.out ())
    {
      _tao_elem = CORBA::Policy::_narrow (_tao_obj_var.in (), ACE_TRY_ENV);
      ACE_TRY_CHECK;
      ((CORBA::Any *)&_tao_any)->_tao_replace (
          CORBA::_tc_Policy,
          1,
          _tao_elem,
          CORBA::Policy::_tao_any_destructor
        );
      return 1;
    }
  }
  ACE_CATCHANY
  {
    _tao_elem = CORBA::Policy::_nil ();
    return 0;
  }
  ACE_ENDTRY;
  _tao_elem = CORBA::Policy::_nil ();
  return 0;
}

// ****************************************************************

void operator<<= (
    CORBA::Any &_tao_any,
    const CORBA::PolicyList &_tao_elem
  ) // copying
{
    TAO_OutputCDR stream;
    if (stream << _tao_elem)
    {
      _tao_any._tao_replace (
          CORBA::_tc_PolicyList,
          TAO_ENCAP_BYTE_ORDER,
          stream.begin ()
        );
    }
}

void CORBA::PolicyList::_tao_any_destructor (void *x)
{
  CORBA::PolicyList *tmp = ACE_static_cast(CORBA::PolicyList*,x);
  delete tmp;
}

void operator<<= (CORBA::Any &_tao_any, CORBA::PolicyList *_tao_elem) // non copying
{
    TAO_OutputCDR stream;
    stream << *_tao_elem;
    _tao_any._tao_replace (
        CORBA::_tc_PolicyList,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin (),
        1,
        _tao_elem,
        CORBA::PolicyList::_tao_any_destructor
      );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, CORBA::PolicyList *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_PolicyList, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (CORBA::PolicyList *)_tao_any.value ();
      return 1;
    }
    else
    {
      ACE_NEW_RETURN (_tao_elem, CORBA::PolicyList, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            CORBA::_tc_PolicyList,
            1,
            ACE_reinterpret_cast (void *, _tao_elem),
            CORBA::PolicyList::_tao_any_destructor
          );
        return 1;
      }
      else
      {
        delete _tao_elem;
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete _tao_elem;
    _tao_elem = 0;
    return 0;
  }
  ACE_ENDTRY;
  return 0;
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const CORBA::PolicyList *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_PolicyList, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (CORBA::PolicyList *)_tao_any.value ();
      return 1;
    }
    else
    {
      ACE_NEW_RETURN (_tao_elem, CORBA::PolicyList, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *(CORBA::PolicyList *)_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            CORBA::_tc_PolicyList,
            1,
            ACE_reinterpret_cast (void *, ACE_const_cast (CORBA::PolicyList *&, _tao_elem)),
            CORBA::PolicyList::_tao_any_destructor
          );
        return 1;
      }
      else
      {
        delete ACE_const_cast (CORBA::PolicyList *&, _tao_elem);
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete ACE_const_cast (CORBA::PolicyList *&, _tao_elem);
    _tao_elem = 0;
    return 0;
  }
  ACE_ENDTRY;
  return 0;
}

void operator<<= (
    CORBA::Any &_tao_any,
    const CORBA::PolicyTypeSeq &_tao_elem
  ) // copying
{
    TAO_OutputCDR stream;
    if (stream << _tao_elem)
    {
      _tao_any._tao_replace (
          CORBA::_tc_PolicyTypeSeq,
          TAO_ENCAP_BYTE_ORDER,
          stream.begin ()
        );
    }
}

void CORBA::PolicyTypeSeq::_tao_any_destructor (void *x)
{
  CORBA::PolicyTypeSeq *tmp = ACE_static_cast(CORBA::PolicyTypeSeq*,x);
  delete tmp;
}

void operator<<= (CORBA::Any &_tao_any, CORBA::PolicyTypeSeq *_tao_elem) // non copying
{
    TAO_OutputCDR stream;
    stream << *_tao_elem;
    _tao_any._tao_replace (
        CORBA::_tc_PolicyTypeSeq,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin (),
        1,
        _tao_elem,
        CORBA::PolicyTypeSeq::_tao_any_destructor
      );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, CORBA::PolicyTypeSeq *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_PolicyTypeSeq, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (CORBA::PolicyTypeSeq *)_tao_any.value ();
      return 1;
    }
    else
    {
      ACE_NEW_RETURN (_tao_elem, CORBA::PolicyTypeSeq, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            CORBA::_tc_PolicyTypeSeq,
            1,
            ACE_reinterpret_cast (void *, _tao_elem),
            CORBA::PolicyTypeSeq::_tao_any_destructor
          );
        return 1;
      }
      else
      {
        delete _tao_elem;
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete _tao_elem;
    _tao_elem = 0;
    return 0;
  }
  ACE_ENDTRY;
  return 0;
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const CORBA::PolicyTypeSeq *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_PolicyTypeSeq, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (CORBA::PolicyTypeSeq *)_tao_any.value ();
      return 1;
    }
    else
    {
      ACE_NEW_RETURN (_tao_elem, CORBA::PolicyTypeSeq, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *(CORBA::PolicyTypeSeq *)_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            CORBA::_tc_PolicyTypeSeq,
            1,
            ACE_reinterpret_cast (void *, ACE_const_cast (CORBA::PolicyTypeSeq *&, _tao_elem)),
            CORBA::PolicyTypeSeq::_tao_any_destructor
          );
        return 1;
      }
      else
      {
        delete ACE_const_cast (CORBA::PolicyTypeSeq *&, _tao_elem);
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete ACE_const_cast (CORBA::PolicyTypeSeq *&, _tao_elem);
    _tao_elem = 0;
    return 0;
  }
  ACE_ENDTRY;
  return 0;
}

void operator<<= (CORBA::Any &_tao_any, CORBA::SetOverrideType _tao_elem)
{
    TAO_OutputCDR stream;
    stream << _tao_elem;
    _tao_any._tao_replace (
        CORBA::_tc_SetOverrideType,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin ()
      );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, CORBA::SetOverrideType &_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_SetOverrideType, ACE_TRY_ENV)) // not equal
      {
        return 0;
      }
    ACE_TRY_CHECK;
    TAO_InputCDR stream (
        _tao_any._tao_get_cdr (),
        _tao_any._tao_byte_order ()
      );
    if (stream >> _tao_elem)
    {
      return 1;
    }
  }
  ACE_CATCHANY
  {
    return 0;
  }
  ACE_ENDTRY;
  return 0;
}

// ****************************************************************

CORBA::Boolean
operator<< (
    TAO_OutputCDR &strm,
    const CORBA_Policy_ptr _tao_objref
  )
{
  CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    CORBA_Policy_ptr &_tao_objref
  )
{
  ACE_TRY_NEW_ENV
  {
    CORBA::Object_var obj;
    if ((strm >> obj.inout ()) == 0)
      return 0;
    // narrow to the right type
    _tao_objref =
      CORBA_Policy::_narrow (
          obj.in (),
          ACE_TRY_ENV
        );
    ACE_TRY_CHECK;
    return 1;
  }
  ACE_CATCHANY
  {
    // do nothing
  }
  ACE_ENDTRY;
  return 0;
}

void CORBA::PolicyManager::_tao_any_destructor (void *x)
{
  CORBA::PolicyManager *tmp = ACE_static_cast(CORBA::PolicyManager*,x);
  CORBA::release (tmp);
}

void operator<<= (CORBA::Any &_tao_any, CORBA::PolicyManager_ptr _tao_elem)
{
    TAO_OutputCDR stream;
    if (stream << _tao_elem)
    {
      _tao_any._tao_replace (
          CORBA::_tc_PolicyManager,
          TAO_ENCAP_BYTE_ORDER,
          stream.begin (),
          1,
          _tao_elem,
          CORBA::PolicyManager::_tao_any_destructor
        );
    }
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, CORBA::PolicyManager_ptr &_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    _tao_elem = CORBA::PolicyManager::_nil ();
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_PolicyManager, ACE_TRY_ENV)) // not equal
      {
        return 0;
      }
    ACE_TRY_CHECK;
    TAO_InputCDR stream (
        _tao_any._tao_get_cdr (),
        _tao_any._tao_byte_order ()
      );
    CORBA::Object_var _tao_obj_var;
    if (stream >> _tao_obj_var.out ())
    {
      _tao_elem = CORBA::PolicyManager::_narrow (_tao_obj_var.in (), ACE_TRY_ENV);
      ACE_TRY_CHECK;
      ((CORBA::Any *)&_tao_any)->_tao_replace (
          CORBA::_tc_PolicyManager,
          1,
          _tao_elem,
          CORBA::PolicyManager::_tao_any_destructor
        );
      return 1;
    }
  }
  ACE_CATCHANY
  {
    _tao_elem = CORBA::PolicyManager::_nil ();
    return 0;
  }
  ACE_ENDTRY;
  _tao_elem = CORBA::PolicyManager::_nil ();
  return 0;
}

void CORBA::PolicyCurrent::_tao_any_destructor (void *x)
{
  CORBA::PolicyCurrent *tmp = ACE_static_cast(CORBA::PolicyCurrent*,x);
  CORBA::release (tmp);
}

void operator<<= (CORBA::Any &_tao_any, CORBA::PolicyCurrent_ptr _tao_elem)
{
    TAO_OutputCDR stream;
    if (stream << _tao_elem)
    {
      _tao_any._tao_replace (
          CORBA::_tc_PolicyCurrent,
          TAO_ENCAP_BYTE_ORDER,
          stream.begin (),
          1,
          _tao_elem,
          CORBA::PolicyCurrent::_tao_any_destructor
        );
    }
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, CORBA::PolicyCurrent_ptr &_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    _tao_elem = CORBA::PolicyCurrent::_nil ();
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (CORBA::_tc_PolicyCurrent, ACE_TRY_ENV)) // not equal
      {
        return 0;
      }
    ACE_TRY_CHECK;
    TAO_InputCDR stream (
        _tao_any._tao_get_cdr (),
        _tao_any._tao_byte_order ()
      );
    CORBA::Object_var _tao_obj_var;
    if (stream >> _tao_obj_var.out ())
    {
      _tao_elem = CORBA::PolicyCurrent::_narrow (_tao_obj_var.in (), ACE_TRY_ENV);
      ACE_TRY_CHECK;
      ((CORBA::Any *)&_tao_any)->_tao_replace (
          CORBA::_tc_PolicyCurrent,
          1,
          _tao_elem,
          CORBA::PolicyCurrent::_tao_any_destructor
        );
      return 1;
    }
  }
  ACE_CATCHANY
  {
    _tao_elem = CORBA::PolicyCurrent::_nil ();
    return 0;
  }
  ACE_ENDTRY;
  _tao_elem = CORBA::PolicyCurrent::_nil ();
  return 0;
}

// ****************************************************************

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

template class TAO_Unbounded_Sequence<CORBA::UShort>;
template class TAO_Unbounded_Sequence<CORBA::ULong>;
template class TAO_Unbounded_Object_Sequence<CORBA_Policy,CORBA_Policy_var>;
template class TAO_Object_Manager<CORBA_Policy,CORBA_Policy_var>;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

#pragma instantiate TAO_Unbounded_Sequence<CORBA::UShort>
#pragma instantiate TAO_Unbounded_Sequence<CORBA::ULong>
#pragma instantiate TAO_Unbounded_Object_Sequence<CORBA_Policy,CORBA_Policy_var>
#pragma instantiate TAO_Object_Manager<CORBA_Policy,CORBA_Policy_var>

#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */
