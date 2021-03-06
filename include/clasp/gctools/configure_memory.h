#ifndef configure_memory_H
#define configure_memory_H

#define TAGGED_POINTER 1



/// USE_BOEHM_MEMORY_MARKER may be useful for debugging processes that cons memory
/// I lets you write an integer (by using (gctools:gc-marker <int>) into the header
/// of every object allocated while that marker is set.
/// Then you can use (room t <int>) to dump only those objects marked with the marker

//#define USE_BOEHM_MEMORY_MARKER

#ifdef USE_BOEHM
 #ifdef USE_CXX_DYNAMIC_CAST
  #define BIG_BOEHM_HEADER
 #endif
#endif

/// Define USE_ALLOCA_FOR_FRAME to use alloca to create Lisp stack frames within the C++ stack
/// otherwise use the garbage collector to maintain a separate stack for lisp frames
///
#ifdef USE_BOEHM
#define USE_ALLOCA_FOR_FRAME
#endif

#ifdef USE_MPS
#define USE_ALLOCA_FOR_FRAME
#endif

/// Tracking allocations with TRACK_ALLOCATIONS keeps a count of
/// exactly how many bytes are CONSed by Clasp
/// Compiling min-boehm-recompile with it defined 4:54 min and off 4.56 min
/// so it has no significant impact at this stage
#define TRACK_ALLOCATIONS // this may slow down allocation

///
/// Only define one of MPS_RECOGNIZE_ALL_TAGS or MPS_RECOGNIZE_ZERO_TAG or neither
/// MPS_RECOGNIZE_ALL_TAGS allows any value in the lower three bits to be considered as a pointer
/// MPS_RECOGNIZE_ZERO_TAG allows ( ZERO_TAG_MASK | ptr ) == 0 to be considered as a pointer
//#define MPS_RECOGNIZE_ALL_TAGS   // Anything can be a pointer - overrides MPS_RECOGNIZE_ZERO_TAG
#define MPS_RECOGNIZE_ZERO_TAG   // recognize #b000 as a tagged pointer
#define ZERO_TAG_MASK 7          // goes with MPS_RECOGNIZE_ZERO_TAG

// Match tags using (ptr&MATCH_TAG_MASK)==MATCH_TAG_EQ
// These values are used in point
#define POINTER_GENERAL_TAG 0x01
#define POINTER_CONS_TAG    0x03
  /*! A test for pointers has the form (potential_ptr&POINTER_TAG_MASK)==POINTER_TAG_EQ) 
      This will recognize 0x01 and 0x03 and not 0x05 (VALIST_S)*/
#define POINTER_TAG_MASK    0x05  
#define POINTER_TAG_EQ      0x01

///------------------------------------------------------------
/// USE_STATIC_ANALYZER_GLOBAL_SYMBOLS
///
/// If USE_SYMBOLS_IN_GLOBAL_ARRAY is undefined then
/// symbols are fixed using either those extracted using the static analyzer
/// or by the scraper.

//#define USE_STATIC_ANALYZER_GLOBAL_SYMBOLS


/// USE_SYMBOLS_IN_GLOBAL_ARRAY
/// Puts all global symbols in one large array
/// and they are fixed in gc_interface.cc with a loop

#define USE_SYMBOLS_IN_GLOBAL_ARRAY


/// ----------------------------------------------------------------------
///
/// MPS debugging options
///

//#define DEBUG_THROW_IF_INVALID_CLIENT_ON
#endif
