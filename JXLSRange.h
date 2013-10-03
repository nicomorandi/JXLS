//
//  JXLSRange.h
//  JXLS
//
//  Created by David Hoerl on 10/26/08.
//  Copyright 2008-2013 David Hoerl. All rights reserved.
//

@interface JXLSRange : NSObject

-(id)initWithRange:(void *)rg;	// xlslib_core::range *
-(void *)range;

-(void)cellColor:(color_name_t)aColor;

@end