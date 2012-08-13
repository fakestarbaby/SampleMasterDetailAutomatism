//
//  SampleMasterDetailAutomatismDetailViewController.h
//  SampleMasterDetailAutomatism
//
//  Created by fakestarbaby on 2012/08/13.
//  Copyright (c) 2012年 fakestarbaby. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SampleMasterDetailAutomatismDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
