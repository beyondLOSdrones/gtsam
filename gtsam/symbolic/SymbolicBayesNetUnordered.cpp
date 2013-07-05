/* ----------------------------------------------------------------------------

 * GTSAM Copyright 2010, Georgia Tech Research Corporation, 
 * Atlanta, Georgia 30332-0415
 * All Rights Reserved
 * Authors: Frank Dellaert, et al. (see THANKS for the full author list)

 * See LICENSE for the license information

 * -------------------------------------------------------------------------- */

/**
 * @file SymbolicBayesNet.cpp
 * @date Oct 29, 2009
 * @author Frank Dellaert
 * @author Richard Roberts
 */

#include <gtsam/inference/BayesNetUnordered-inst.h>
#include <gtsam/symbolic/SymbolicBayesNetUnordered.h>

namespace gtsam {

  /* ************************************************************************* */
  bool SymbolicBayesNetUnordered::equals(const This& bn, double tol = 1e-9) const
  {
    return Base::equals(bn, tol);
  }


}
