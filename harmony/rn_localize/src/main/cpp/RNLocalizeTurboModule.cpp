/**
 * MIT License
 *
 * Copyright (C) 2024 Huawei Device Co., Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "RNLocalizeTurboModule.h"

using namespace rnoh;
using namespace facebook;

static jsi::Value __hostFunction_RNLocalizeTurboModule_getCalendar(jsi::Runtime &rt,
                                                                             react::TurboModule &turboModule,
                                                                             const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "getCalendar", args, count);
}
static jsi::Value __hostFunction_RNLocalizeTurboModule_getCountry(jsi::Runtime &rt, react::TurboModule &turboModule,
                                                               const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "getCountry", args, count);
}
static jsi::Value __hostFunction_RNLocalizeTurboModule_getCurrencies(jsi::Runtime &rt, react::TurboModule &turboModule,
                                                               const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "getCurrencies", args, count);
}
static jsi::Value __hostFunction_RNLocalizeTurboModule_getLocales(jsi::Runtime &rt, react::TurboModule &turboModule,
                                                                     const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "getLocales", args, count);
}
static jsi::Value __hostFunction_RNLocalizeTurboModule_getNumberFormatSettings(jsi::Runtime &rt, react::TurboModule &turboModule,
                                                                     const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "getNumberFormatSettings", args, count);
}
static jsi::Value __hostFunction_RNLocalizeTurboModule_getTemperatureUnit(jsi::Runtime &rt, react::TurboModule &turboModule,
                                                                     const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "getTemperatureUnit", args, count);
}
static jsi::Value __hostFunction_RNLocalizeTurboModule_getTimeZone(jsi::Runtime &rt, react::TurboModule &turboModule,
                                                                     const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "getTimeZone", args, count);
}
static jsi::Value __hostFunction_RNLocalizeTurboModule_uses24HourClock(jsi::Runtime &rt, react::TurboModule &turboModule,
                                                                     const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "uses24HourClock", args, count);
}
static jsi::Value __hostFunction_RNLocalizeTurboModule_usesMetricSystem(jsi::Runtime &rt, react::TurboModule &turboModule,
                                                                     const jsi::Value *args, size_t count) {
    return static_cast<ArkTSTurboModule &>(turboModule).call(rt, "usesMetricSystem", args, count);
}

RNLocalizeTurboModule::RNLocalizeTurboModule(const ArkTSTurboModule::Context ctx, const std::string name)
    : ArkTSTurboModule(ctx, name) {
    methodMap_["getCalendar"] = MethodMetadata{0, __hostFunction_RNLocalizeTurboModule_getCalendar};
    methodMap_["getCountry"] = MethodMetadata{0, __hostFunction_RNLocalizeTurboModule_getCountry};
    methodMap_["getCurrencies"] = MethodMetadata{0, __hostFunction_RNLocalizeTurboModule_getCurrencies};
    methodMap_["getLocales"] = MethodMetadata{0, __hostFunction_RNLocalizeTurboModule_getLocales};
    methodMap_["getNumberFormatSettings"] = MethodMetadata{0, __hostFunction_RNLocalizeTurboModule_getNumberFormatSettings};
    methodMap_["getTemperatureUnit"] = MethodMetadata{0, __hostFunction_RNLocalizeTurboModule_getTemperatureUnit};
    methodMap_["getTimeZone"] = MethodMetadata{0, __hostFunction_RNLocalizeTurboModule_getTimeZone};
    methodMap_["uses24HourClock"] = MethodMetadata{0, __hostFunction_RNLocalizeTurboModule_uses24HourClock};
    methodMap_["usesMetricSystem"] = MethodMetadata{0, __hostFunction_RNLocalizeTurboModule_usesMetricSystem};
}
