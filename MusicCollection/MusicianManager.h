//
//  MusicianManager.h
//  MusicCollection
//
//  Created by steve on 2016-11-15.
//  Copyright © 2016 steve. All rights reserved.
//

/*
 * The manager will handle all of the calls from the datasource
 */

@import UIKit;
@class Musician;
@class PhotoObject;

@interface MusicianManager : NSObject
@property (nonatomic, readonly) NSArray <Musician *>* musicianArray;
- (NSInteger)numberOfItemsInSection:(NSInteger)section;
- (PhotoObject *)photoItemAtIndexPath:(NSIndexPath *)indexPath;
- (Musician *)musicianAtIndexPath:(NSIndexPath *)indexPath;
@end
