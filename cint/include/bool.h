#pragma ifndef G__BOOL_H
#pragma define G__BOOL_H

#undef FALSE
#undef TRUE
#undef true
#undef false
#ifndef G__OLDIMPLEMENTATION1604
// bool as fundamental type
//const bool FALSE=0,false=0,TRUE=1,true=1;
const bool false=0,true=1;
#else
enum bool { FALSE = 0, false = 0, TRUE = 1, true = 1 };
#endif
bool bool() { return false; }

// This is not needed due to fix 1584
//#pragma link off class bool;
//#pragma link off function bool;

#pragma endif

