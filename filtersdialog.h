/*
 * Copyright (C) 2009 Nicolas Bonnefon and other contributors
 *
 * This file is part of LogCrawler.
 *
 * LogCrawler is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * LogCrawler is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with LogCrawler.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FILTERSDIALOG_H
#define FILTERSDIALOG_H

#include <QDialog>

#include "ui_filtersdialog.h"

class FiltersDialog : public QDialog, public Ui::FiltersDialog
{
  Q_OBJECT

  public:
    FiltersDialog( QWidget* parent = 0 );

  private slots:
    void on_addFilterButton_clicked();
    void on_removeFilterButton_clicked();

  private:
    void populateFilterList();
};

#endif
