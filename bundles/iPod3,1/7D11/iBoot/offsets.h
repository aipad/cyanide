/**
  * GreenPois0n Cynanide - iPod3,1/7D11/iBoot/offsets.h
  * Copyright (C) 2010 Chronic-Dev Team
  * Copyright (C) 2010 Joshua Hill
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 **/
 
#ifndef OFFSETS_H
#define OFFSETS_H

// Standard offsets
#define IBOOT_FREE                     (0x144CC+1)
#define IBOOT_MALLOC                   (0x14D00+1)
#define IBOOT_PRINTF                   (0x1E030+1)
#define IBOOT_VPRINTF                  (0x1DFE0+1)

// Command offsets
#define IBOOT_CMD_LIST_BEGIN           (0x29000)
#define IBOOT_CMD_LIST_END             (0x2902C)

#endif // OFFSETS_H
