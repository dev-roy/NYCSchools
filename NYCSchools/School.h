//
//  School.h
//  NYCSchools
//
//  Created by Rodrigo Buendia Ramos on 4/18/20.
//  Copyright © 2020 Rodrigo Buendia Ramos. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface School : NSObject

@property (strong, nonatomic) NSString *schoolName;
@property (strong, nonatomic) NSString *numOfTestTakers;
@property (strong, nonatomic) NSString *readingScore;
@property (strong, nonatomic) NSString *mathScore;
@property (strong, nonatomic) NSString *writingScore;

@end
