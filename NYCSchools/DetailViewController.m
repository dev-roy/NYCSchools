//
//  DetailViewController.m
//  NYCSchools
//
//  Created by Rodrigo Buendia Ramos on 4/18/20.
//  Copyright © 2020 Rodrigo Buendia Ramos. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

- (void)configureView {
    // Update the user interface for the detail item.
    if (self.detailItem) {
        self.schoolNameLabel.text = [self.detailItem schoolName];
        NSString *numberOfTakers = @"Number of takers: ";
        NSString *takersLbl = [numberOfTakers stringByAppendingString:[self.detailItem numOfTestTakers]];
        self.numOfTakersLabel.text = takersLbl;
        NSString *readingScore = @"Reading score: ";
               NSString *readingLbl = [readingScore stringByAppendingString:[self.detailItem readingScore]];
               self.readingScoreLabel.text = readingLbl;
        NSString *mathScore = @"Matg score: ";
        NSString *mathLbl = [mathScore stringByAppendingString:[self.detailItem mathScore]];
        self.mathScoreLabel.text = mathLbl;
        NSString *writingScore = @"Writing score: ";
        NSString *writingLbl = [writingScore stringByAppendingString:[self.detailItem writingScore]];
        self.writingScoreLabel.text = writingLbl;
    }
}


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    [self configureView];
}


#pragma mark - Managing the detail item

- (void)setDetailItem:(School *)newDetailItem {
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
        
        // Update the view.
        [self configureView];
    }
}


@end
