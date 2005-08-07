/**CFile****************************************************************

  FileName    [main.h]

  SystemName  [ABC: Logic synthesis and verification system.]

  PackageName [The main package.]

  Synopsis    [External declarations of the main package.]

  Author      [Alan Mishchenko]
  
  Affiliation [UC Berkeley]

  Date        [Ver. 1.0. Started - June 20, 2005.]

  Revision    [$Id: main.h,v 1.00 2005/06/20 00:00:00 alanmi Exp $]

***********************************************************************/

#ifndef __MAIN_H__
#define __MAIN_H__

////////////////////////////////////////////////////////////////////////
///                         TYPEDEFS                                 ///
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
///                    STRUCTURE DEFINITIONS                         ///
////////////////////////////////////////////////////////////////////////

// the framework containing all data
typedef struct Abc_Frame_t_      Abc_Frame_t;   

////////////////////////////////////////////////////////////////////////
///                          INCLUDES                                ///
////////////////////////////////////////////////////////////////////////

// this include should be the first one in the list
// it is used to catch memory leaks on Windows
#include "leaks.h"       

// standard includes
#include <stdio.h>
#include <string.h>

// includes from GLU
#include "util.h"
#include "st.h"

// data structure packages
#include "extra.h"
#include "vec.h"

// core packages
#include "abc.h"
#include "cmd.h"
#include "io.h"

////////////////////////////////////////////////////////////////////////
///                         PARAMETERS                               ///
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
///                       GLOBAL VARIABLES                           ///
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
///                       MACRO DEFITIONS                            ///
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
///                     FUNCTION DEFITIONS                           ///
////////////////////////////////////////////////////////////////////////

/*=== mvFrame.c ===========================================================*/
extern Abc_Ntk_t *     Abc_FrameReadNet( Abc_Frame_t * p );
extern FILE *          Abc_FrameReadOut( Abc_Frame_t * p );
extern FILE *          Abc_FrameReadErr( Abc_Frame_t * p );
extern bool            Abc_FrameReadMode( Abc_Frame_t * p );
extern bool            Abc_FrameSetMode( Abc_Frame_t * p, bool fNameMode );
extern void            Abc_FrameRestart( Abc_Frame_t * p );

extern void            Abc_FrameSetCurrentNetwork( Abc_Frame_t * p, Abc_Ntk_t * pNet );
extern void            Abc_FrameSwapCurrentAndBackup( Abc_Frame_t * p );
extern void            Abc_FrameReplaceCurrentNetwork( Abc_Frame_t * p, Abc_Ntk_t * pNet );
extern void            Abc_FrameUnmapAllNetworks( Abc_Frame_t * p );
extern void            Abc_FrameDeleteAllNetworks( Abc_Frame_t * p );

extern void               Abc_FrameSetGlobalFrame( Abc_Frame_t * p );
extern Abc_Frame_t *   Abc_FrameGetGlobalFrame();

extern Abc_Ntk_t *     Abc_FrameReadNtkStore       ( Abc_Frame_t * pFrame );
extern int             Abc_FrameReadNtkStoreSize   ( Abc_Frame_t * pFrame );
extern void            Abc_FrameSetNtkStore        ( Abc_Frame_t * pFrame, Abc_Ntk_t * pNtk );
extern void            Abc_FrameSetNtkStoreSize    ( Abc_Frame_t * pFrame, int nStored  );

extern void *          Abc_FrameReadLibLut         ( Abc_Frame_t * pFrame );
extern void *          Abc_FrameReadLibGen         ( Abc_Frame_t * pFrame );
extern void *          Abc_FrameReadLibSuper       ( Abc_Frame_t * pFrame );
extern void            Abc_FrameSetLibLut          ( Abc_Frame_t * pFrame, void * pLib );
extern void            Abc_FrameSetLibGen          ( Abc_Frame_t * pFrame, void * pLib );
extern void            Abc_FrameSetLibSuper        ( Abc_Frame_t * pFrame, void * pLib );


////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////

#endif
