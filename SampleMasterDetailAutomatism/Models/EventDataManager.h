//
//  EventDataManager.h
//  SampleMasterDetailAutomatism
//
//  Created by fakestarbaby on 2012/08/13.
//  Copyright (c) 2012年 fakestarbaby. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EventDataManager : NSObject

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

+ (EventDataManager *)sharedManager;
- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
