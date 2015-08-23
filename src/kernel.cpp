/* ---------------------------------------------------------------------------- *
 * Copyright (C) 2014-2015 Alisson Linhares de Carvalho.                        *
 * All rights reserved.                                                         *
 *                                                                              *
 * This file is part of the Native Kit.                                         *
 *                                                                              *
 * The Native Kit is free software: you can redistribute it and/or modify it    *
 * under the terms of the GNU Lesser General Public License as published by     *
 * the Free Software Foundation, either version 3 of the License, or            *
 * (at your option) any later version.                                          *
 *                                                                              *
 * The Native Kit is distributed in the hope that it will be useful, but        *
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY   *
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for  *
 * more details.                                                                *
 *                                                                              *
 * You should have received a copy of the GNU General Public License along with *
 * the Native Kit. If not, see <http://www.gnu.org/licenses/>.                  *
 * ---------------------------------------------------------------------------- */

#include <system.h>
#include <memory.h>
#include <video.h>
#include <syscalls.h>

class SimpleKernel : public System {
public:
	SimpleKernel() : System() {
		Memory memory;
		Video video;
		SysCalls syscalls;

		this->install( video );
		this->install( syscalls );
		this->install( memory );
		this->setDefaultOutput( video );
	}

	void start() {
		printf( "Hello World: usando a syscall write\n" );
	}
};

int main() {
	SimpleKernel kernel;
	kernel.start();
	return 0;
}