#ifndef lightlystyleconfig_h
#define lightlystyleconfig_h

/*************************************************************************
 * Copyright (C) 2014 by Hugo Pereira Da Costa <hugo.pereira@free.fr>    *
 *                                                                       *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 *************************************************************************/

#include "ui_lightlystyleconfig.h"

namespace Lightly
{

class StyleConfig : public QWidget, Ui::LightlyStyleConfig
{
    Q_OBJECT

public:
    //* constructor
    explicit StyleConfig(QWidget *);

    //* destructor
    virtual ~StyleConfig()
    {
    }

Q_SIGNALS:

    //* emitted whenever one option is changed.
    void changed(bool);

public Q_SLOTS:

    //* load setup from config data
    void load();

    //* save current state
    void save();

    //* restore all default values
    void defaults();

    //* reset to saved configuration
    void reset();

protected Q_SLOTS:

    //* update modified state when option is checked/unchecked
    void updateChanged();
};
}
#endif
