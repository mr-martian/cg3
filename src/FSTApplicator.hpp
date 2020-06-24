/*
* Copyright (C) 2007-2020, GrammarSoft ApS
* Developed by Tino Didriksen <mail@tinodidriksen.com>
* Design by Eckhard Bick <eckhard.bick@mail.dk>, Tino Didriksen <mail@tinodidriksen.com>
*
* This file is part of VISL CG-3
*
* VISL CG-3 is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* VISL CG-3 is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with VISL CG-3.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#ifndef c6d28b7452ec699b_FSTAPPLICATOR_HPP
#define c6d28b7452ec699b_FSTAPPLICATOR_HPP

#include "GrammarApplicator.hpp"

namespace CG3 {

class FSTApplicator : public virtual GrammarApplicator {
public:
	FSTApplicator(std::ostream& ux_err);
	void runGrammarOnText(std::istream& input, std::ostream& output);

	double wfactor;
	UString wtag;
	UString sub_delims;
};
}

#endif
