//
//  DetailViewController.h
//  Test
//
//  Created by Uday on 11/06/15.
//  Copyright (c) 2015 Uday. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

