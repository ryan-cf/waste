/*
  Copyright (c) 1998-2003 VIA Technologies, Inc.

  This program is free software; you can redistribute it and/or modify it under
  the terms of the GNU General Public License as published by the Free Software
  Foundation; either version 2, or (at your option) any later version.

  This program is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTIES OR REPRESENTATIONS; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU General Public License for more details.

  You should have received a copy of the GNU General Public License along with
  this program; if not, write to the Free Software Foundation, Inc.,
  59 Temple Place - Suite 330, Boston, MA 02111-1307, USA. 
*/
/*
 * This file implements the display of UploadFileDialog
 * Author: Stanley San
 * Date Created: 2003.12.1
*/

#include "qulf_dialog.h"
#include <qlabel.h>

Vaste_UploadFileDlg::Vaste_UploadFileDlg( QWidget* parent , const char* name )
	: QFileDialog( parent,name ), m_ulpath(this)
{
	qDebug("Vaste_UploadFileDlg");
	setMode(QFileDialog::ExistingFiles);
	addWidgets( new QLabel("upload path",this), &m_ulpath , NULL );
}
Vaste_UploadFileDlg::~Vaste_UploadFileDlg()
{
}

QString Vaste_UploadFileDlg::getUpLoadPath(void)
{
    return m_ulpath.text();
}