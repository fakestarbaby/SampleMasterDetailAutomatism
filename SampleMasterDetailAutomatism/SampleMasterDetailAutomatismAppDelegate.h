//
//  SampleMasterDetailAutomatismAppDelegate.h
//  SampleMasterDetailAutomatism
//
//  Created by fakestarbaby on 2012/08/13.
//  Copyright (c) 2012年 fakestarbaby. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SampleMasterDetailAutomatismAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
