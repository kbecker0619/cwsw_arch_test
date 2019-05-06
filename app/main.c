/** @file
 *
 *	Copyright (c) 2019 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 27, 2018
 *	Author: kbecker
 */

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdlib.h>     	/* EXIT_SUCCESS */

// ----	Project Headers -------------------------
#include "cwsw_lib.h"
#include "cwsw_eventsim.h"

// ----	Module Headers --------------------------
#include "cwsw_arch.h"


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Global Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Module-level Variables ------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

void
EventHandler__evTerminateRequested(tEventPayload EventData)
{
	UNUSED(EventData);
	(void)puts("Goodbye Cruel World!");
}


int main(void)
{
	tEventPayload ev = {0};
	(void)Init(Cwsw_Lib);		// Cwsw_Lib__Init()
	(void)Init(Cwsw_Arch);		// Cwsw_Arch__Init()

	PostEvent(evTerminateRequested, ev);
	return EXIT_SUCCESS;
}
