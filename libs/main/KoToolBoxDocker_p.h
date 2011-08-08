/*
 * Copyright (c) 2005 Boudewijn Rempt <boud@valdyas.org>
 * Copyright (c) 2005-2008 Thomas Zander <zander@kde.org>
 * Copyright (c) 2009 Peter Simonsson <peter.simonsson@gmail.com>
 * Copyright (c) 2010 Cyrille Berger <cberger@cberger.net>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */
#ifndef _KO_TOOLBOX_DOCKER_H_
#define _KO_TOOLBOX_DOCKER_H_

#include <KoCanvasObserverBase.h>

#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QHash>
#include <QtGui/QDockWidget>

class QToolButton;
class KoCanvasController;
class KoCanvasBase;
class KoShapeLayer;
class KoToolBox;

class KoToolBoxDocker : public QDockWidget, public KoCanvasObserverBase
{
    Q_OBJECT
public:
    KoToolBoxDocker(KoToolBox *toolBox);

    /// reimplemented from KoCanvasObserverBase
    virtual void setCanvas(KoCanvasBase *canvas);
    virtual void unsetCanvas();

protected slots:
    void updateToolBoxOrientation(Qt::DockWidgetArea area);
    void updateFloating(bool);

private:
    KoToolBox *m_toolBox;
};

#endif // _KO_TOOLBOX_H_