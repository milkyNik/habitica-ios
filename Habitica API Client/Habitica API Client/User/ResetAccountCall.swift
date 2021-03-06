//
//  ResetAccountCall.swift
//  Habitica API Client
//
//  Created by Phillip Thelen on 09.04.18.
//  Copyright © 2018 HabitRPG Inc. All rights reserved.
//

import Foundation
import Habitica_Models
import FunkyNetwork
import ReactiveSwift

public class ResetAccountCall: ResponseObjectCall<EmptyResponseProtocol, APIEmptyResponse> {
    public init(stubHolder: StubHolderProtocol? = StubHolder(responseCode: 200, stubFileName: "user.json")) {
        super.init(httpMethod: .POST, endpoint: "user/reset", postData: nil, stubHolder: stubHolder)
    }
}
