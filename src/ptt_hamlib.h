/*
 * Sound card modem for Amateur Radio AX25.
 *
 * Copyright (C) Alejandro Santos, 2013, alejolp@gmail.com.
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef SRC_PTT_HAMLIB_H_
#define SRC_PTT_HAMLIB_H_

#ifdef HAMLIB_FOUND

#include <hamlib/rig.h>

#include "ptt.h"

namespace extmodem {

class ptt_hamlib : public ptt {
public:
	ptt_hamlib();
	virtual ~ptt_hamlib();

	virtual int init(const char* fname);
	virtual void set_tx(int tx);
	virtual int get_tx();

	void close();

private:
	RIG *rig_;
	int state_;
};

} /* namespace extmodem */

#endif

#endif /* SRC_PTT_HAMLIB_H_ */
