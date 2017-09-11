/*
 * remote-conference.cpp
 * Copyright (C) 2017  Belledonne Communications SARL
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
 */

#include "conference-p.h"

#include "remote-conference.h"

LINPHONE_BEGIN_NAMESPACE

// =============================================================================

class RemoteConferencePrivate : public ConferencePrivate {
public:
};

// =============================================================================

RemoteConference::RemoteConference (LinphoneCore *core, const Address &myAddress, CallListener *listener)
	: Conference(*new RemoteConferencePrivate, core, myAddress, listener) {}

LINPHONE_END_NAMESPACE