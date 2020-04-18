//
//  DetailViewController.h
//  NYCSchools
//
//  Created by Rodrigo Buendia Ramos on 4/18/20.
//  Copyright © 2020 Rodrigo Buendia Ramos. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

