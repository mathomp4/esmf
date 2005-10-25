// $Id: ESMC_Macros.h,v 1.1.2.2 2005/10/25 22:46:24 jwolfe Exp $
//
// Earth System Modeling Framework
// Copyright 2002-2003, University Corporation for Atmospheric Research,
// Massachusetts Institute of Technology, Geophysical Fluid Dynamics
// Laboratory, University of Michigan, National Centers for Environmental
// Prediction, Los Alamos National Laboratory, Argonne National Laboratory,
// NASA Goddard Space Flight Center.
// Licensed under the GPL.

// Public prototypes and constants for the ESMF C++ interface

#ifndef ESMC_MACROS_H
#define ESMC_MACROS_H

//BOP
// -------------------------------------------------------------------------
// 
//  !DESCRIPTION:
// 
//  Utility macros and constants usable ESMF-wide from the C++ interface.
// 
//  (all lines below between the !BOP and !EOP markers will be included in
//   the automated document processing.)
// 
// -------------------------------------------------------------------------
//EOP

// These MUST stay in sync with the constants defined in ESMF_Base.F90
// in the Infrastructure/Base/interface directory.

#define ESMF_SUCCESS  0
#define ESMF_FAILURE -1

#define ESMF_MAXSTR 128
#define ESMF_MAXDIM 7
#define ESMF_MAXDECOMPDIM 3
#define ESMF_MAXGRIDDIM 3

#if 0
// this is now in ESMF_Macros.inc
#define ESMF_SRCLINE __FILE__, __LINE__
#endif


#define ESMF_MAJOR_VERSION 2
#define ESMF_MINOR_VERSION 2
#define ESMF_REVISION      0
#define ESMF_PATCHLEVEL    1

#define ESMF_VERSION_STRING "2.2.0rp1"

#endif   // ESMC_MACROS_H

