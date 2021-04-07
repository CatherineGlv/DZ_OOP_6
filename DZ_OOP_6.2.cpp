#include <iostream>
#include <ostream>

inline std::ostream& endl(std::ostream& os)
{
	os.put(os.widen('\n'));
	if (debug_mode) os.flush();
	
	return os;
}