//===========================================================
// JFlowInput.h
//===========================================================

#define JFlowInput_H

#include <iostream>
#include <fstream>
#include <stdlib.h>

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

#include <TFile.h>
#include <TTree.h>
#include <TClonesArray.h>
#include <TGraphErrors.h>
#include "toyflowinputs.h"

const UInt_t tableId[] = {223,220,224,225,226,221,227,228,229,222,230,231}; //indexing table because the HEPdata table order was messed up by its author
const UInt_t vnPDFN = sizeof(tableId)/sizeof(tableId[0]);

class JFlowInput {
	public:
		JFlowInput(); 
		virtual ~JFlowInput(){;}	  //destructor

		void LoadAliceData();


	public:

		TGraphErrors *pgrVnPDF[vnPDFN];
		
};
