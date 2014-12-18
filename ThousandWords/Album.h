//
//  Album.h
//  ThousandWords
//
//  Created by Saurav Sharma on 10/13/14.
//  Copyright (c) 2014 ZineOne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Album : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * date;

@end
