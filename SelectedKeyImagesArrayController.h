//
//  SelectedKeyImagesArrayController.h
//  OsiriX
//
//  Created by Lance Pysher on 8/14/06.

/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://www.osirix-viewer.com/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/


#import <Cocoa/Cocoa.h>
#import "AllKeyImagesArrayController.h"


 /** \brief  Controller for array of keyImages */
 

@interface SelectedKeyImagesArrayController : AllKeyImagesArrayController {
	
}

- (void)addKeyImages:(NSNotification *)note;
- (void)select:(id)sender;

@end
