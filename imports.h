/*
    This file is part of Spike Guard.

    Spike Guard is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Spike Guard is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Spike Guard.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _IMPORTS_H_
#define _IMPORTS_H_

#include <string>
#include <algorithm>

#include <boost/filesystem.hpp>
#include <boost/assign.hpp>

#include "hashes.h"
#include "pe.h"

namespace bfs = boost::filesystem;

namespace hash {

/**
 *	@brief	Computes the hash of a PE's imports.
 *	Per http://www.mandiant.com/blog/tracking-malware-import-hashing/
 *
 *	@return	A MD5 hash of the ordered import list.
 *
 *	Implementation is located in imports.cpp.
 */
DECLSPEC std::string hash_imports(const sg::PE& pe);

} //namespace sg

#endif