# Journey to AI Engineering

As a software engineer, I am building my skills for the AI era.

Artificial intelligence is becoming an essential part of modern software development. My goal is not to focus only on large language models, but to develop a broad and practical understanding of AI engineering: from APIs and prompting to retrieval, agents, evaluation, deployment, and production systems.

This repository documents my learning journey through hands-on exercises, experiments, and projects. I am using it to strengthen my existing software engineering experience and develop the skills needed to design, build, test, and operate reliable AI-powered applications.

## Learning Roadmap

### Phase 1: Foundation

- **LLM APIs**: OpenAI and Anthropic SDKs, streaming, retries, rate limits, and cost tracking
- **Prompt engineering**: System prompts, few-shot examples, prompt templates, and reliable reasoning patterns
- **Structured output**: Pydantic models, JSON Schema, validation, and retries for invalid responses
- **Tool and function calling**: Tool schemas, dispatching calls, and returning results to the model

### Phase 2: Retrieval

- **Embeddings**: Similarity metrics and choosing suitable embedding models
- **Vector databases**: PostgreSQL with pgvector, Pinecone, indexing, and metadata filtering
- **Retrieval-Augmented Generation (RAG)**: Chunking, hybrid search, reranking, and document parsing
- **Framework comparison**: Rebuilding RAG pipelines with LangChain and LlamaIndex
- **Context engineering**: Memory, summarization, and context compression

### Phase 3: Agents

- **Agent building**: Implementing a ReAct loop from scratch using Thought, Action, and Observation
- **Model Context Protocol (MCP)**: Building an MCP server and connecting a client
- **LangGraph**: State, checkpointing, and human-in-the-loop workflows
- **Composio**: Connecting agents to external applications and integrations
- **Multi-agent systems**: Supervisor and worker patterns, handoffs, and shared state

### Phase 4: Production AI Engineering

- **Observability**: Tracing, token usage, and cost tracking with Langfuse
- **Evaluation**: LLM-as-judge, RAGAS, DeepEval, and evaluation datasets
- **Hallucination reduction**: Grounding, citations, self-checking, and abstaining when uncertain
- **Guardrails and prompt injection defense**: Input and output validation, tool permissions, and untrusted-content handling
- **Caching and optimization**: Semantic caching, model routing, latency, and cost optimization
- **Deployment**: Docker, CI/CD, and running evaluations in the delivery pipeline

## Repository Structure

The repository is organized by learning phase and project topic. Each project focuses on applying concepts through code rather than only reading about them.

## Progress

This is a work in progress. The code and documentation will evolve as I learn, experiment, and build more capable AI systems.

# 1: AI Engineer Core

## ✅ Setup and environment
## ✅ API connection
## ✅ Groq/google/OpenAI-compatible API usage
## ✅ Prompt engineering
## ✅ Chat completion
## ✅ Structured output
## ✅ Tokenization and embeddings
## ✅ Streaming responses

## ✅ Important learning
These are the meaningful Week 1 topics. They are useful because they show the real foundation of AI app building: setup, API access, prompt design, streaming, and interactive output.

# 2: Multimodal AI

## ✅ Multimodal
## ✅ langchain_openai
## ✅ prompt Caching
## ✅ Converstaion between LLMs

# 3: Gradio

## ✅ Gradio Interface and its Components
## ✅ use Gradio with LLMs input output
## ✅ use Gradio with LLMs streaming output

# 4: Steaming Chatbot with Gradio

## ✅ Chatbot
## ✅ One shot prompting
## ✅ first look at RAG
