// WPXMLRPCDecoderDelegate.h
//
// Copyright (c) 2013 WordPress - http://wordpress.org/
// Based on Eric Czarny's xmlrpc library - https://github.com/eczarny/xmlrpc
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

typedef enum {
    WPXMLRPCElementTypeArray,
    WPXMLRPCElementTypeDictionary,
    WPXMLRPCElementTypeMember,
    WPXMLRPCElementTypeName,
    WPXMLRPCElementTypeInteger,
    WPXMLRPCElementTypeDouble,
    WPXMLRPCElementTypeBoolean,
    WPXMLRPCElementTypeString,
    WPXMLRPCElementTypeDate,
    WPXMLRPCElementTypeData
} WPXMLRPCElementType;

#pragma mark -

@interface WPXMLRPCDecoderDelegate : NSObject<NSXMLParserDelegate> {
    WPXMLRPCDecoderDelegate *myParent;
    NSMutableArray *myChildren;
    WPXMLRPCElementType myElementType;
    NSString *myElementKey;
    id myElementValue;
}

- (id)initWithParent:(WPXMLRPCDecoderDelegate *)parent;

#pragma mark -

- (void)setParent:(WPXMLRPCDecoderDelegate *)parent;

- (WPXMLRPCDecoderDelegate *)parent;

#pragma mark -

- (void)setElementType:(WPXMLRPCElementType)elementType;

- (WPXMLRPCElementType)elementType;

#pragma mark -

- (void)setElementKey:(NSString *)elementKey;

- (NSString *)elementKey;

#pragma mark -

- (void)setElementValue:(id)elementValue;

- (id)elementValue;

@end
