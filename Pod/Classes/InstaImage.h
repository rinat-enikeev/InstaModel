//
//  InstaImage.h
//  Pods
//
//  Created by Rinat Enikeev on 18/11/15.
//
//

#ifndef InstaImage_h
#define InstaImage_h

@import Foundation;
@import UIKit;

@protocol InstaPost;

@protocol InstaImage <NSObject>

@property (nullable, nonatomic, strong) UIImage *image;

@property (nullable, nonatomic, retain, readonly) NSNumber *height;
@property (nullable, nonatomic, retain, readonly) NSString *localPath;
@property (nullable, nonatomic, retain, readonly) NSString *urlString;
@property (nullable, nonatomic, retain, readonly) NSNumber *width;
@property (nullable, nonatomic, retain, readonly) NSSet<InstaPost *> *postLow;
@property (nullable, nonatomic, retain, readonly) NSSet<InstaPost *> *postStd;
@property (nullable, nonatomic, retain, readonly) NSSet<InstaPost *> *postThumb;

@end

#endif /* InstaImage_h */
