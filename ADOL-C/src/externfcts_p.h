/*----------------------------------------------------------------------------
 ADOL-C -- Automatic Differentiation by Overloading in C++
 File:     externfcts_p.h
 Revision: $Id$
 Contents: private functions and data types for extern (differentiated)
           functions.
 
 Copyright (c) Andreas Kowarz, Jean Utke
  
 This file is part of ADOL-C. This software is provided as open source.
 Any use, reproduction, or distribution of the software constitutes 
 recipient's acceptance of the terms of the accompanying license file.
          
----------------------------------------------------------------------------*/

#if !defined(ADOLC_EXTERNFCTS_P_H)
#define ADOLC_EXTERNFCTS_P_H 1

#include <adolc/internal/common.h>
#include <adolc/externfcts.h>
#include <adolc/externfcts2.h>

/****************************************************************************/
/*                                                         Now the C THINGS */

#define EDFCTS_BLOCK_SIZE 10


#ifdef __cplusplus
void update_ext_fct_memory(ext_diff_fct *edfct, int n, int m);
void update_ext_fct_memory(ext_diff_fct_v2 *edfct, int nin, int nout, int *insz, int *outsz);
#endif

/****************************************************************************/

#endif /* ADOLC_EXTERNFCTS_P_H */

