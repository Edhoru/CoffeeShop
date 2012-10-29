//
//  DetailViewController.h
//  CoffeeShop
//
//  Created by Alberto Huerdo on 29/10/12.
//  Copyright (c) 2012 Alberto Huerdo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
