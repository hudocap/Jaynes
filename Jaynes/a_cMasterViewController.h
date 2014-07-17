//
//  a_cMasterViewController.h
//  Jaynes
//
//  Created by Hudson Jaynes on 7/17/14.
//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <UIKit/UIKit.h>

@class a_cDetailViewController;

#import <CoreData/CoreData.h>

@interface a_cMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) a_cDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
