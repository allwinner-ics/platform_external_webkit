/*
 * Copyright (C) 2011 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef InstrumentingAgents_h
#define InstrumentingAgents_h

#include <wtf/FastAllocBase.h>
#include <wtf/Noncopyable.h>

namespace WebCore {

class InspectorApplicationCacheAgent;
class InspectorBrowserDebuggerAgent;
class InspectorCSSAgent;
class InspectorConsoleAgent;
class InspectorDOMAgent;
class InspectorDOMStorageAgent;
class InspectorDatabaseAgent;
class InspectorDebuggerAgent;
class InspectorProfilerAgent;
class InspectorResourceAgent;
class InspectorRuntimeAgent;
class InspectorTimelineAgent;

class InstrumentingAgents {
    WTF_MAKE_NONCOPYABLE(InstrumentingAgents);
    WTF_MAKE_FAST_ALLOCATED;
public:
    InstrumentingAgents()
        : m_inspectorCSSAgent(0)
        , m_inspectorConsoleAgent(0)
        , m_inspectorDOMAgent(0)
        , m_inspectorResourceAgent(0)
        , m_inspectorRuntimeAgent(0)
        , m_inspectorTimelineAgent(0)
#if ENABLE(DOM_STORAGE)
        , m_inspectorDOMStorageAgent(0)
#endif
#if ENABLE(DATABASE)
        , m_inspectorDatabaseAgent(0)
#endif
#if ENABLE(OFFLINE_WEB_APPLICATIONS)
        , m_inspectorApplicationCacheAgent(0)
#endif
#if ENABLE(JAVASCRIPT_DEBUGGER)
        , m_inspectorDebuggerAgent(0)
        , m_inspectorBrowserDebuggerAgent(0)
        , m_inspectorProfilerAgent(0)
#endif
    { }
    ~InstrumentingAgents() { }

    InspectorCSSAgent* inspectorCSSAgent() const { return m_inspectorCSSAgent; }
    void setInspectorCSSAgent(InspectorCSSAgent* agent) { m_inspectorCSSAgent = agent; }

    InspectorConsoleAgent* inspectorConsoleAgent() const { return m_inspectorConsoleAgent; }
    void setInspectorConsoleAgent(InspectorConsoleAgent* agent) { m_inspectorConsoleAgent = agent; }

    InspectorDOMAgent* inspectorDOMAgent() const { return m_inspectorDOMAgent; }
    void setInspectorDOMAgent(InspectorDOMAgent* agent) { m_inspectorDOMAgent = agent; }

    InspectorResourceAgent* inspectorResourceAgent() const { return m_inspectorResourceAgent; }
    void setInspectorResourceAgent(InspectorResourceAgent* agent) { m_inspectorResourceAgent = agent; }

    InspectorRuntimeAgent* inspectorRuntimeAgent() const { return m_inspectorRuntimeAgent; }
    void setInspectorRuntimeAgent(InspectorRuntimeAgent* agent) { m_inspectorRuntimeAgent = agent; }

    InspectorTimelineAgent* inspectorTimelineAgent() const { return m_inspectorTimelineAgent; }
    void setInspectorTimelineAgent(InspectorTimelineAgent* agent) { m_inspectorTimelineAgent = agent; }

#if ENABLE(DOM_STORAGE)
    InspectorDOMStorageAgent* inspectorDOMStorageAgent() const { return m_inspectorDOMStorageAgent; }
    void setInspectorDOMStorageAgent(InspectorDOMStorageAgent* agent) { m_inspectorDOMStorageAgent = agent; }
#endif
#if ENABLE(DATABASE)
    InspectorDatabaseAgent* inspectorDatabaseAgent() const { return m_inspectorDatabaseAgent; }
    void setInspectorDatabaseAgent(InspectorDatabaseAgent* agent) { m_inspectorDatabaseAgent = agent; }
#endif
#if ENABLE(OFFLINE_WEB_APPLICATIONS)
    InspectorApplicationCacheAgent* inspectorApplicationCacheAgent() const { return m_inspectorApplicationCacheAgent; }
    void setInspectorApplicationCacheAgent(InspectorApplicationCacheAgent* agent) { m_inspectorApplicationCacheAgent = agent; }
#endif
#if ENABLE(JAVASCRIPT_DEBUGGER)
    InspectorDebuggerAgent* inspectorDebuggerAgent() const { return m_inspectorDebuggerAgent; }
    void setInspectorDebuggerAgent(InspectorDebuggerAgent* agent) { m_inspectorDebuggerAgent = agent; }

    InspectorBrowserDebuggerAgent* inspectorBrowserDebuggerAgent() const { return m_inspectorBrowserDebuggerAgent; }
    void setInspectorBrowserDebuggerAgent(InspectorBrowserDebuggerAgent* agent) { m_inspectorBrowserDebuggerAgent = agent; }

    InspectorProfilerAgent* inspectorProfilerAgent() const { return m_inspectorProfilerAgent; }
    void setInspectorProfilerAgent(InspectorProfilerAgent* agent) { m_inspectorProfilerAgent = agent; }
#endif

private:
    InspectorCSSAgent* m_inspectorCSSAgent;
    InspectorConsoleAgent* m_inspectorConsoleAgent;
    InspectorDOMAgent* m_inspectorDOMAgent;
    InspectorResourceAgent* m_inspectorResourceAgent;
    InspectorRuntimeAgent* m_inspectorRuntimeAgent;
    InspectorTimelineAgent* m_inspectorTimelineAgent;
#if ENABLE(DOM_STORAGE)
    InspectorDOMStorageAgent* m_inspectorDOMStorageAgent;
#endif
#if ENABLE(DATABASE)
    InspectorDatabaseAgent* m_inspectorDatabaseAgent;
#endif
#if ENABLE(OFFLINE_WEB_APPLICATIONS)
    InspectorApplicationCacheAgent* m_inspectorApplicationCacheAgent;
#endif
#if ENABLE(JAVASCRIPT_DEBUGGER)
    InspectorDebuggerAgent* m_inspectorDebuggerAgent;
    InspectorBrowserDebuggerAgent* m_inspectorBrowserDebuggerAgent;
    InspectorProfilerAgent* m_inspectorProfilerAgent;
#endif
};

}

#endif // !defined(InstrumentingAgents_h)