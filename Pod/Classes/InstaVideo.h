//
//  InstaVideo.h
//  Pods
//
//  Created by Rinat Enikeev on 18/11/15.
//
//

#ifndef InstaVideo_h
#define InstaVideo_h

@import Foundation;
@import UIKit;

@protocol InstaPost;

@protocol InstaVideo <NSObject>

@property (nullable, nonatomic, retain, readonly) NSNumber *height;
@property (nullable, nonatomic, retain, readonly) NSString *localPath;
@property (nullable, nonatomic, retain, readonly) NSString *url;
@property (nullable, nonatomic, retain, readonly) NSNumber *width;
@property (nullable, nonatomic, retain, readonly) NSSet<InstaPost *> *postLowBand;
@property (nullable, nonatomic, retain, readonly) NSSet<InstaPost *> *postLowRes;
@property (nullable, nonatomic, retain, readonly) NSSet<InstaPost *> *postStdRes;

@end

#endif /* InstaVideo_h */