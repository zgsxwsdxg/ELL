////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Machine Learning Library (EMLL)
//  File:     SingleElementThresholdPredictor.tcc (predictors)
//  Authors:  Ofer Dekel
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "Exception.h"

namespace predictors
{
    template<typename RandomAccessVectorType>
    int predictors::SingleElementThresholdPredictor::Predict(const RandomAccessVectorType& inputVector) const
    {
        if (inputVector.Size() <= _index)
        {
            throw utilities::InputException(utilities::InputExceptionErrors::indexOutOfRange);
        }

        return inputVector[_index] > _threshold ? 1 : 0;
    }
}