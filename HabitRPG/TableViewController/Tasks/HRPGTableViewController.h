//
//  HRPGTableViewController.h
//  HabitRPG
//
//  Created by Phillip Thelen on 08/03/14.
//  Copyright (c) 2014 Phillip Thelen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HRPGBaseViewController.h"

@interface HRPGTableViewController : HRPGBaseViewController <NSFetchedResultsControllerDelegate>

- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

- (IBAction)unwindToListSave:(UIStoryboardSegue *)segue;

-(void) displayTaskResponse:(NSArray*) valuesArray;

@property(strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
- (NSPredicate*) getPredicate;
@property BOOL displayCompleted;

@end

