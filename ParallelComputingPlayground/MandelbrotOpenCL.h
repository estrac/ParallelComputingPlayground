//
//  MandelbrotOpenCL.h
//  ParallelComputingPlayground
//
//  The MIT License (MIT)
//  Copyright (c) 2013 Morten Nobel-Joergensen. All rights reserved.
//

#ifndef __ParallelComputingPlayground__MandelbrotOpenCL__
#define __ParallelComputingPlayground__MandelbrotOpenCL__

#include <iostream>

#include "AbstractMandelbrot.h"

class MandelbrotOpenCL : public AbstractMandelbrot {
public:
#ifndef NO_OPENCL
    void *createData(int width, int height) override;
#endif
};



#endif /* defined(__ParallelComputingPlayground__MandelbrotOpenCL__) */
