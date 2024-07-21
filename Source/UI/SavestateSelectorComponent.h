/*
Copyright (C) 2007 StrmnNrmn

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/


#ifndef UI_SAVESTATESELECTORCOMPONENT_H_
#define UI_SAVESTATESELECTORCOMPONENT_H_

#include "UIComponent.h"
#include <functional>

class CSavestateSelectorComponent : public CUIComponent
{
	public:
		CSavestateSelectorComponent( CUIContext * p_context );
		virtual ~CSavestateSelectorComponent();

		enum EAccessType
		{
			AT_SAVING,
			AT_LOADING,
		};

		static std::unique_ptr<CSavestateSelectorComponent>	Create( CUIContext * p_context, EAccessType access_type, std::function<void( const char *)> on_savestate_selected, const std::filesystem::path& running_rom );
		void LoadState();
		void SaveState();
};

#endif // UI_SAVESTATESELECTORCOMPONENT_H_
