//
//  SSAlbumTableViewController.h
//  ThousandWords
//
//  Created by Saurav Sharma on 10/13/14.
//  Copyright (c) 2014 ZineOne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SSAlbumTableViewController : UITableViewController

@property (strong, nonatomic) NSMutableArray *albums;

- (IBAction)addAlbumBarButtonItemPressed:(UIBarButtonItem *)sender;

@end
