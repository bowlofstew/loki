///////////////////////////////
//Generated header: TypeInfo.h
//Forwards to the appropriate code
// that works on the detected compiler


#ifdef LOKI_USE_REFERENCE
#	include ".\Reference\TypeInfo.h"
#else
#	if (_MSC_VER >= 1300)
#		include ".\MSVC\1300\TypeInfo.h"
#elif (_MSC_VER >= 1200)
#		include ".\MSVC\1200\TypeInfo.h"
#elif ( (__GNUC__ > 3) || ((__GNUC__ == 3) && (__GNUC_MINOR__ > 1)) )
#		include ".\Reference\TypeInfo.h"
#elif (__BORLANDC__)
#		include ".\Borland\TypeInfo.h"
#	else
		//Define LOKI_USE_REFERENCE and get back to us on the results
#		error Compiler not tested with Loki, #define LOKI_USE_REFERENCE
#	endif
#endif
