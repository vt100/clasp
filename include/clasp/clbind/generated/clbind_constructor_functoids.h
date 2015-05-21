// This file was GENERATED by command:
//     pump.py clbind_constructor_functoids.pmp
// DO NOT EDIT BY HAND!!!

// ret = 0
// template_ = 0
// numVoids = 0
// numArgs = 8
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2,typename ARG3,typename ARG4,
    typename ARG5,typename ARG6,typename ARG7 >
class VariadicConstructorFunctoid
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7> >
: public core::BuiltinClosure {
public:
typedef core::BuiltinClosure TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctoid"; };
enum { NumParams = 8 };
VariadicConstructorFunctoid(core::T_sp name) : core::BuiltinClosure(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
void LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
ALLOC_STACK_VALUE_FRAME(frameImpl,frame,8);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this,this->_lambdaListHandler,scope,LCC_PASS_ARGS);
this->invoke(lcc_resultP , frame::Value(frameImpl,0) , frame::Value(frameImpl,1) , frame::Value(frameImpl,2) ,
    frame::Value(frameImpl,3) , frame::Value(frameImpl,4) , frame::Value(frameImpl,5) , frame::Value(frameImpl,6) ,
    frame::Value(frameImpl,7)  );
}
void invoke(core::T_mv* lcc_resultP , core::T_sp arg0, core::T_sp arg1, core::T_sp arg2, core::T_sp arg3, core::T_sp arg4,
    core::T_sp arg5, core::T_sp arg6, core::T_sp arg7 )
{
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(arg0);
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(arg1);
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(arg2);
translate::from_object<ARG3,typename DoesNotContain_<Pols,pureOutValue<4> >::type > a3(arg3);
translate::from_object<ARG4,typename DoesNotContain_<Pols,pureOutValue<5> >::type > a4(arg4);
translate::from_object<ARG5,typename DoesNotContain_<Pols,pureOutValue<6> >::type > a5(arg5);
translate::from_object<ARG6,typename DoesNotContain_<Pols,pureOutValue<7> >::type > a6(arg6);
translate::from_object<ARG7,typename DoesNotContain_<Pols,pureOutValue<8> >::type > a7(arg7);
T* naked_ptr(new T(a0._v,a1._v,a2._v,a3._v,a4._v,a5._v,a6._v,a7._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,3>::type()
, typename AdoptPointer<Pols,3>::type()
, a3._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,4>::type()
, typename AdoptPointer<Pols,4>::type()
, a4._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,5>::type()
, typename AdoptPointer<Pols,5>::type()
, a5._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,6>::type()
, typename AdoptPointer<Pols,6>::type()
, a6._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,7>::type()
, typename AdoptPointer<Pols,7>::type()
, a7._v);
*lcc_resultP = gctools::multiple_values<core::T_O>(retval,oidx);
}
};
// ret = 0
// template_ = 1
// numVoids = 1
// numArgs = 7
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2,typename ARG3,typename ARG4,
    typename ARG5,typename ARG6 >
class VariadicConstructorFunctoid
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2, ARG3, ARG4, ARG5, ARG6> >
: public core::BuiltinClosure {
public:
typedef core::BuiltinClosure TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctoid"; };
enum { NumParams = 7 };
VariadicConstructorFunctoid(core::T_sp name) : core::BuiltinClosure(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
void LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
ALLOC_STACK_VALUE_FRAME(frameImpl,frame,7);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this,this->_lambdaListHandler,scope,LCC_PASS_ARGS);
this->invoke(lcc_resultP , frame::Value(frameImpl,0) , frame::Value(frameImpl,1) , frame::Value(frameImpl,2) ,
    frame::Value(frameImpl,3) , frame::Value(frameImpl,4) , frame::Value(frameImpl,5) , frame::Value(frameImpl,6)  );
}
void invoke(core::T_mv* lcc_resultP , core::T_sp arg0, core::T_sp arg1, core::T_sp arg2, core::T_sp arg3, core::T_sp arg4,
    core::T_sp arg5, core::T_sp arg6 )
{
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(arg0);
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(arg1);
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(arg2);
translate::from_object<ARG3,typename DoesNotContain_<Pols,pureOutValue<4> >::type > a3(arg3);
translate::from_object<ARG4,typename DoesNotContain_<Pols,pureOutValue<5> >::type > a4(arg4);
translate::from_object<ARG5,typename DoesNotContain_<Pols,pureOutValue<6> >::type > a5(arg5);
translate::from_object<ARG6,typename DoesNotContain_<Pols,pureOutValue<7> >::type > a6(arg6);
T* naked_ptr(new T(a0._v,a1._v,a2._v,a3._v,a4._v,a5._v,a6._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,3>::type()
, typename AdoptPointer<Pols,3>::type()
, a3._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,4>::type()
, typename AdoptPointer<Pols,4>::type()
, a4._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,5>::type()
, typename AdoptPointer<Pols,5>::type()
, a5._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,6>::type()
, typename AdoptPointer<Pols,6>::type()
, a6._v);
*lcc_resultP = gctools::multiple_values<core::T_O>(retval,oidx);
}
};
// ret = 0
// template_ = 2
// numVoids = 2
// numArgs = 6
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2,typename ARG3,typename ARG4,
    typename ARG5 >
class VariadicConstructorFunctoid
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2, ARG3, ARG4, ARG5> >
: public core::BuiltinClosure {
public:
typedef core::BuiltinClosure TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctoid"; };
enum { NumParams = 6 };
VariadicConstructorFunctoid(core::T_sp name) : core::BuiltinClosure(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
void LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
ALLOC_STACK_VALUE_FRAME(frameImpl,frame,6);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this,this->_lambdaListHandler,scope,LCC_PASS_ARGS);
this->invoke(lcc_resultP , frame::Value(frameImpl,0) , frame::Value(frameImpl,1) , frame::Value(frameImpl,2) ,
    frame::Value(frameImpl,3) , frame::Value(frameImpl,4) , frame::Value(frameImpl,5)  );
}
void invoke(core::T_mv* lcc_resultP , core::T_sp arg0, core::T_sp arg1, core::T_sp arg2, core::T_sp arg3, core::T_sp arg4,
    core::T_sp arg5 )
{
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(arg0);
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(arg1);
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(arg2);
translate::from_object<ARG3,typename DoesNotContain_<Pols,pureOutValue<4> >::type > a3(arg3);
translate::from_object<ARG4,typename DoesNotContain_<Pols,pureOutValue<5> >::type > a4(arg4);
translate::from_object<ARG5,typename DoesNotContain_<Pols,pureOutValue<6> >::type > a5(arg5);
T* naked_ptr(new T(a0._v,a1._v,a2._v,a3._v,a4._v,a5._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,3>::type()
, typename AdoptPointer<Pols,3>::type()
, a3._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,4>::type()
, typename AdoptPointer<Pols,4>::type()
, a4._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,5>::type()
, typename AdoptPointer<Pols,5>::type()
, a5._v);
*lcc_resultP = gctools::multiple_values<core::T_O>(retval,oidx);
}
};
// ret = 0
// template_ = 3
// numVoids = 3
// numArgs = 5
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2,typename ARG3,typename ARG4 >
class VariadicConstructorFunctoid
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2, ARG3, ARG4> >
: public core::BuiltinClosure {
public:
typedef core::BuiltinClosure TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctoid"; };
enum { NumParams = 5 };
VariadicConstructorFunctoid(core::T_sp name) : core::BuiltinClosure(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
void LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
ALLOC_STACK_VALUE_FRAME(frameImpl,frame,5);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this,this->_lambdaListHandler,scope,LCC_PASS_ARGS);
this->invoke(lcc_resultP , frame::Value(frameImpl,0) , frame::Value(frameImpl,1) , frame::Value(frameImpl,2) ,
    frame::Value(frameImpl,3) , frame::Value(frameImpl,4)  );
}
void invoke(core::T_mv* lcc_resultP , core::T_sp arg0, core::T_sp arg1, core::T_sp arg2, core::T_sp arg3, core::T_sp arg4 )
{
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(arg0);
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(arg1);
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(arg2);
translate::from_object<ARG3,typename DoesNotContain_<Pols,pureOutValue<4> >::type > a3(arg3);
translate::from_object<ARG4,typename DoesNotContain_<Pols,pureOutValue<5> >::type > a4(arg4);
T* naked_ptr(new T(a0._v,a1._v,a2._v,a3._v,a4._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,3>::type()
, typename AdoptPointer<Pols,3>::type()
, a3._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,4>::type()
, typename AdoptPointer<Pols,4>::type()
, a4._v);
*lcc_resultP = gctools::multiple_values<core::T_O>(retval,oidx);
}
};
// ret = 0
// template_ = 4
// numVoids = 4
// numArgs = 4
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2,typename ARG3 >
class VariadicConstructorFunctoid
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2, ARG3> >
: public core::BuiltinClosure {
public:
typedef core::BuiltinClosure TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctoid"; };
enum { NumParams = 4 };
VariadicConstructorFunctoid(core::T_sp name) : core::BuiltinClosure(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
void LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
ALLOC_STACK_VALUE_FRAME(frameImpl,frame,4);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this,this->_lambdaListHandler,scope,LCC_PASS_ARGS);
this->invoke(lcc_resultP , frame::Value(frameImpl,0) , frame::Value(frameImpl,1) , frame::Value(frameImpl,2) ,
    frame::Value(frameImpl,3)  );
}
void invoke(core::T_mv* lcc_resultP , core::T_sp arg0, core::T_sp arg1, core::T_sp arg2, core::T_sp arg3 )
{
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(arg0);
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(arg1);
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(arg2);
translate::from_object<ARG3,typename DoesNotContain_<Pols,pureOutValue<4> >::type > a3(arg3);
T* naked_ptr(new T(a0._v,a1._v,a2._v,a3._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,3>::type()
, typename AdoptPointer<Pols,3>::type()
, a3._v);
*lcc_resultP = gctools::multiple_values<core::T_O>(retval,oidx);
}
};
// ret = 0
// template_ = 5
// numVoids = 5
// numArgs = 3
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1,typename ARG2 >
class VariadicConstructorFunctoid
< Pols, Pointer, T, constructor<ARG0, ARG1, ARG2> >
: public core::BuiltinClosure {
public:
typedef core::BuiltinClosure TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctoid"; };
enum { NumParams = 3 };
VariadicConstructorFunctoid(core::T_sp name) : core::BuiltinClosure(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
void LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
ALLOC_STACK_VALUE_FRAME(frameImpl,frame,3);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this,this->_lambdaListHandler,scope,LCC_PASS_ARGS);
this->invoke(lcc_resultP , frame::Value(frameImpl,0) , frame::Value(frameImpl,1) , frame::Value(frameImpl,2)  );
}
void invoke(core::T_mv* lcc_resultP , core::T_sp arg0, core::T_sp arg1, core::T_sp arg2 )
{
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(arg0);
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(arg1);
translate::from_object<ARG2,typename DoesNotContain_<Pols,pureOutValue<3> >::type > a2(arg2);
T* naked_ptr(new T(a0._v,a1._v,a2._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,2>::type()
, typename AdoptPointer<Pols,2>::type()
, a2._v);
*lcc_resultP = gctools::multiple_values<core::T_O>(retval,oidx);
}
};
// ret = 0
// template_ = 6
// numVoids = 6
// numArgs = 2
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0,typename ARG1 >
class VariadicConstructorFunctoid
< Pols, Pointer, T, constructor<ARG0, ARG1> >
: public core::BuiltinClosure {
public:
typedef core::BuiltinClosure TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctoid"; };
enum { NumParams = 2 };
VariadicConstructorFunctoid(core::T_sp name) : core::BuiltinClosure(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
void LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
ALLOC_STACK_VALUE_FRAME(frameImpl,frame,2);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this,this->_lambdaListHandler,scope,LCC_PASS_ARGS);
this->invoke(lcc_resultP , frame::Value(frameImpl,0) , frame::Value(frameImpl,1)  );
}
void invoke(core::T_mv* lcc_resultP , core::T_sp arg0, core::T_sp arg1 )
{
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(arg0);
translate::from_object<ARG1,typename DoesNotContain_<Pols,pureOutValue<2> >::type > a1(arg1);
T* naked_ptr(new T(a0._v,a1._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,1>::type()
, typename AdoptPointer<Pols,1>::type()
, a1._v);
*lcc_resultP = gctools::multiple_values<core::T_O>(retval,oidx);
}
};
// ret = 0
// template_ = 7
// numVoids = 7
// numArgs = 1
/* Specialization */
template <typename Pols, typename Pointer, typename T ,typename ARG0 >
class VariadicConstructorFunctoid
< Pols, Pointer, T, constructor<ARG0> >
: public core::BuiltinClosure {
public:
typedef core::BuiltinClosure TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctoid"; };
enum { NumParams = 1 };
VariadicConstructorFunctoid(core::T_sp name) : core::BuiltinClosure(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
void LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
ALLOC_STACK_VALUE_FRAME(frameImpl,frame,1);
core::StackFrameDynamicScopeManager scope(frame);
lambdaListHandler_createBindings(this,this->_lambdaListHandler,scope,LCC_PASS_ARGS);
this->invoke(lcc_resultP , frame::Value(frameImpl,0)  );
}
void invoke(core::T_mv* lcc_resultP , core::T_sp arg0 )
{
translate::from_object<ARG0,typename DoesNotContain_<Pols,pureOutValue<1> >::type > a0(arg0);
T* naked_ptr(new T(a0._v));
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
core::MultipleValues& returnValues = core::lisp_multipleValues();
returnValues.setSize(0);
int oidx = 1;
ReturnValueWhen(returnValues,oidx
, typename is_outValue<Pols,0>::type()
, typename AdoptPointer<Pols,0>::type()
, a0._v);
*lcc_resultP = gctools::multiple_values<core::T_O>(retval,oidx);
}
};
// ret = 0
// template_ = 8
// numVoids = 8
// numArgs = 0
/* Specialization */
template <typename Pols, typename Pointer, typename T  >
class VariadicConstructorFunctoid
< Pols, Pointer, T, constructor<> >
: public core::BuiltinClosure {
public:
typedef core::BuiltinClosure TemplatedBase;
public:
typedef Wrapper<T,Pointer>  WrapperType;
public:
virtual const char* describe() const { return "VariadicConstructorFunctoid"; };
enum { NumParams = 0 };
VariadicConstructorFunctoid(core::T_sp name) : core::BuiltinClosure(name) {};
DISABLE_NEW();
virtual size_t templatedSizeof() const { return sizeof(*this);};
void LISP_CALLING_CONVENTION()
{
INVOCATION_HISTORY_FRAME();
this->invoke(lcc_resultP  );
}
void invoke(core::T_mv* lcc_resultP  )
{
T* naked_ptr(new T());
gctools::smart_ptr<WrapperType> retval = WrapperType::create(naked_ptr,reg::registered_class<T>::id);
int oidx = 1;
*lcc_resultP = gctools::multiple_values<core::T_O>(retval,oidx);
}
};

