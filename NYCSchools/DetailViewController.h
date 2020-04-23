//
//  DetailViewController.h
//  NYCSchools
//
//  Created by Rodrigo Buendia Ramos on 4/18/20.
//  Copyright © 2020 Rodrigo Buendia Ramos. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "School.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) School *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *schoolNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *numOfTakersLabel;
@property (weak, nonatomic) IBOutlet UILabel *readingScoreLabel;
@property (weak, nonatomic) IBOutlet UILabel *mathScoreLabel;
@property (weak, nonatomic) IBOutlet UILabel *writingScoreLabel;

@end

