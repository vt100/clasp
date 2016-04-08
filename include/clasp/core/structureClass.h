/*
    File: structureClass.h
*/

/*
Copyright (c) 2014, Christian E. Schafmeister
 
CLASP is free software; you can redistribute it and/or
modify it under the terms of the GNU Library General Public
License as published by the Free Software Foundation; either
version 2 of the License, or (at your option) any later version.
 
See directory 'clasp/licenses' for full details.
 
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
/* -^- */
#ifndef _core_structureClass_H
#define _core_structureClass_H

#include <stdio.h>
#include <string>
#include <vector>
#include <set>
#include <clasp/core/foundation.h>
#include <clasp/core/object.h>
#include <clasp/core/holder.h>

namespace core {

SMART(StructureClass);

SMART(StringSet);

SMART(StructureClass);
class StructureClass_O : public Class_O {
  LISP_META_CLASS(core::StandardClass_O);
  LISP_CLASS(core, ClPkg, StructureClass_O, "structure-class",Class_O);

public:
#if defined(XML_ARCHIVE)
  void archiveBase(ArchiveP node);
#endif // defined(XML_ARCHIVE)
  void initialize();
GCPROTECTED:
  Class_sp _InstanceCoreClass;
 public:
  static StructureClass_sp make( Symbol_sp name, T_sp included_class);
public:
  /*! Special creator used when starting up lisp environment, the object returned will be a root */
  static StructureClass_sp createUncollectable();
  StructureClass_O();
  virtual ~StructureClass_O(){};
};
};

template <>
struct gctools::GCInfo<core::StructureClass_O> {
  static bool constexpr NeedsInitialization = true;
  static bool constexpr NeedsFinalization = false;
  static GCInfo_policy constexpr Policy = normal;
};

namespace core {

};
TRANSLATE(core::StructureClass_O);
#endif //]
