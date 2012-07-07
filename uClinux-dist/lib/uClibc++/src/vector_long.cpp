/*	Copyright (C) 2004 Garrett A. Kajmowicz

	This file is part of the uClibc++ Library.

	This library is free software; you can redistribute it and/or
	modify it under the terms of the GNU Lesser General Public
	License as published by the Free Software Foundation; either
	version 2.1 of the License, or (at your option) any later version.

	This library is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
	Lesser General Public License for more details.

	You should have received a copy of the GNU Lesser General Public
	License along with this library; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#define __UCLIBCXX_COMPILE_VECTOR__ 1


#include <vector>

namespace std{

#ifdef __UCLIBCXX_EXPAND_VECTOR_BASIC__

	template _UCXXEXPORT void vector<long int>::reserve(size_type n);
	template _UCXXEXPORT void vector<unsigned long int>::reserve(size_type n);
	template _UCXXEXPORT void vector<long int>::resize(size_type sz, const long int & c);
	template _UCXXEXPORT void vector<unsigned long int>::resize(size_type sz, const unsigned long int & c);

#endif

}
