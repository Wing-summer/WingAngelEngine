﻿/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

#pragma once

#include <string>
#include <cstddef>
#include "antlr4-common.h"
#include "Vocabulary.h"

namespace antlr4 {
namespace dfa {

  /// A DFA walker that knows how to dump them to serialized strings.
  class ANTLR4CPP_PUBLIC DFASerializer {
  public:
    DFASerializer(const DFA *dfa, const Vocabulary &vocabulary);

    virtual ~DFASerializer() = default;

    std::string toString() const;

  protected:
    virtual std::string getEdgeLabel(size_t i) const;
    std::string getStateString(DFAState *s) const;

  private:
    const DFA *_dfa;
    const Vocabulary &_vocabulary;
  };

} // namespace atn
} // namespace antlr4
