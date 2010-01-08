/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 2008 Soeren Sonnenburg
 * Copyright (C) 2008 Fraunhofer Institute FIRST and Max-Planck-Society
 */


#include "SGInterface.h"
#include "GUISignals.h"

#include <shogun/lib/config.h>
#include <shogun/lib/io.h>
#include <shogun/genomic_signals/TrainPredMaster.h>

using namespace shogun;

CGUISignals::CGUISignals(CSGInterface* ui_)
: ui(ui_), m_tpm(NULL) 
{
	SG_PRINT("constructor GUISignals\n");
}

CGUISignals::~CGUISignals()
{
}
